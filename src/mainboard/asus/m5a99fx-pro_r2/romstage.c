/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2012 Advanced Micro Devices, Inc.
 * Copyright (C) 2014 Edward O'Callaghan <eocallaghan@alterapraxis.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include <stdint.h>
#include <string.h>
#include <device/pci_def.h>
#include <device/pci_ids.h>
#include <arch/io.h>
#include <arch/stages.h>
#include <device/pnp_def.h>
#include <cpu/x86/lapic.h>
#include <console/console.h>
#include <console/loglevel.h>
#include "cpu/amd/car.h"
#include "cpu/x86/bist.h"
#include <superio/ite/common.h>
#include <superio/ite/it8721f/it8721f.h>
#include "cpu/x86/lapic.h"
#include "nb_cimx.h"
#include <sb_cimx.h>
#include "Platform.h"
#include <arch/cpu.h>

#define SERIAL_DEV PNP_DEV(0x2e, IT8721F_SP1)

u32 agesawrapper_amdinitmmio (void);
u32 agesawrapper_amdinitreset (void);
u32 agesawrapper_amdinitearly (void);
u32 agesawrapper_amdinitenv (void);
u32 agesawrapper_amdinitlate (void);
u32 agesawrapper_amdinitpost (void);
u32 agesawrapper_amdinitmid (void);


void cache_as_ram_main(unsigned long bist, unsigned long cpu_init_detectedx)
{
	u32 val;

	if (!cpu_init_detectedx && boot_cpu()) {

		ite_enable_serial(SERIAL_DEV, CONFIG_TTYS0_BASE);
		console_init();

		/*
		 * SR5650/5670/5690 RD890 chipset, read pci config space hang at POR,
		 * Disable all Pcie Bridges to work around It.
		 */
		sr56x0_rd890_disable_pcie_bridge();

	}

	post_code(0x32);
	val = agesawrapper_amdinitmmio();
	if (val) {
		printk(BIOS_DEBUG, "agesawrapper_amdinitmmio failed: %x \n", val);
	} else {
		printk(BIOS_DEBUG, "agesawrapper_amdinitmmio passed\n");
	}

	/* Halt if there was a built in self test failure */
	post_code(0x33);
	report_bist_failure(bist);

	// Load MPB
	val = cpuid_eax(1);
	printk(BIOS_DEBUG, "BSP Family_Model: %08x \n", val);
	printk(BIOS_DEBUG, "cpu_init_detectedx = %08lx \n", cpu_init_detectedx);

	if(boot_cpu()) {
		post_code(0x34);
		sb_Poweron_Init();
	}

	post_code(0x35);
	val = agesawrapper_amdinitreset();
	if (val) {
		printk(BIOS_DEBUG, "agesawrapper_amdinitreset failed: %x \n", val);
	} else {
		printk(BIOS_DEBUG, "agesawrapper_amdinitreset passed\n");
	}

	post_code(0x36);
	val = agesawrapper_amdinitearly ();
	if (val) {
		printk(BIOS_DEBUG, "agesawrapper_amdinitearly failed: %x \n", val);
	} else {
		printk(BIOS_DEBUG, "agesawrapper_amdinitearly passed\n");
	}

	post_code(0x37);
	nb_Poweron_Init();
	post_code(0x38);
	nb_Ht_Init();


	post_code(0x39);
	val = agesawrapper_amdinitpost ();
	if (val) {
		printk(BIOS_DEBUG, "agesawrapper_amdinitpost failed: %x \n", val);
	} else {
		printk(BIOS_DEBUG, "agesawrapper_amdinitpost passed\n");
	}

	post_code(0x40);
	val = agesawrapper_amdinitenv ();
	if (val) {
		printk(BIOS_DEBUG, "agesawrapper_amdinitenv failed: %x \n", val);
	} else {
		printk(BIOS_DEBUG, "agesawrapper_amdinitenv passed\n");
	}


	post_code(0x43);
	print_debug("Disabling cache as ram ");
	disable_cache_as_ram();
	print_debug("done\n");

	post_code(0x44);
	copy_and_run();

	post_code(0x45);  // Should never see this post code.
}
