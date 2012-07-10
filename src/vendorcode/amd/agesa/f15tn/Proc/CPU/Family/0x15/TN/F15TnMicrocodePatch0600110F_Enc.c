/* $NoKeywords:$ */
/**
 * @file
 *
 * AMD F15Tn Microcode patch.
 *
 * F15Tn Microcode Patch rev 0600110F for 6101 or equivalent.
 *
 * @xrefitem bom "File Content Label" "Release Content"
 * @e project:      AGESA
 * @e sub-project:  CPU/Family/0x15/TN
 * @e \$Revision: 64060 $   @e \$Date: 2012-01-15 21:36:26 -0600 (Sun, 15 Jan 2012) $
 */
/*****************************************************************************
 *
 * Copyright 2008 - 2012 ADVANCED MICRO DEVICES, INC.  All Rights Reserved.
 *
 * AMD is granting you permission to use this software (the Materials)
 * pursuant to the terms and conditions of your Software License Agreement
 * with AMD.  This header does *NOT* give you permission to use the Materials
 * or any rights under AMD's intellectual property.  Your use of any portion
 * of these Materials shall constitute your acceptance of those terms and
 * conditions.  If you do not agree to the terms and conditions of the Software
 * License Agreement, please do not use any portion of these Materials.
 *
 * CONFIDENTIALITY:  The Materials and all other information, identified as
 * confidential and provided to you by AMD shall be kept confidential in
 * accordance with the terms and conditions of the Software License Agreement.
 *
 * LIMITATION OF LIABILITY: THE MATERIALS AND ANY OTHER RELATED INFORMATION
 * PROVIDED TO YOU BY AMD ARE PROVIDED "AS IS" WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTY OF ANY KIND, INCLUDING BUT NOT LIMITED TO WARRANTIES OF
 * MERCHANTABILITY, NONINFRINGEMENT, TITLE, FITNESS FOR ANY PARTICULAR PURPOSE,
 * OR WARRANTIES ARISING FROM CONDUCT, COURSE OF DEALING, OR USAGE OF TRADE.
 * IN NO EVENT SHALL AMD OR ITS LICENSORS BE LIABLE FOR ANY DAMAGES WHATSOEVER
 * (INCLUDING, WITHOUT LIMITATION, DAMAGES FOR LOSS OF PROFITS, BUSINESS
 * INTERRUPTION, OR LOSS OF INFORMATION) ARISING OUT OF AMD'S NEGLIGENCE,
 * GROSS NEGLIGENCE, THE USE OF OR INABILITY TO USE THE MATERIALS OR ANY OTHER
 * RELATED INFORMATION PROVIDED TO YOU BY AMD, EVEN IF AMD HAS BEEN ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGES.  BECAUSE SOME JURISDICTIONS PROHIBIT THE
 * EXCLUSION OR LIMITATION OF LIABILITY FOR CONSEQUENTIAL OR INCIDENTAL DAMAGES,
 * THE ABOVE LIMITATION MAY NOT APPLY TO YOU.
 *
 * AMD does not assume any responsibility for any errors which may appear in
 * the Materials or any other related information provided to you by AMD, or
 * result from use of the Materials or any related information.
 *
 * You agree that you will not reverse engineer or decompile the Materials.
 *
 * NO SUPPORT OBLIGATION: AMD is not obligated to furnish, support, or make any
 * further information, software, technical information, know-how, or show-how
 * available to you.  Additionally, AMD retains the right to modify the
 * Materials at any time, without notice, and is not obligated to provide such
 * modified Materials to you.
 *
 * U.S. GOVERNMENT RESTRICTED RIGHTS: The Materials are provided with
 * "RESTRICTED RIGHTS." Use, duplication, or disclosure by the Government is
 * subject to the restrictions as set forth in FAR 52.227-14 and
 * DFAR252.227-7013, et seq., or its successor.  Use of the Materials by the
 * Government constitutes acknowledgement of AMD's proprietary rights in them.
 *
 * EXPORT ASSURANCE:  You agree and certify that neither the Materials, nor any
 * direct product thereof will be exported directly or indirectly, into any
 * country prohibited by the United States Export Administration Act and the
 * regulations thereunder, without the required authorization from the U.S.
 * government nor will be used for any purpose prohibited by the same.
 *
 ***************************************************************************/



/*----------------------------------------------------------------------------------------
 *                             M O D U L E S    U S E D
 *----------------------------------------------------------------------------------------
 */
#include "AGESA.h"
#include "Ids.h"
#include "cpuRegisters.h"
#include "cpuEarlyInit.h"
CODE_GROUP (G3_DXE)
RDATA_GROUP (G3_DXE)

/*----------------------------------------------------------------------------------------
 *                   D E F I N I T I O N S    A N D    M A C R O S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                  T Y P E D E F S     A N D     S T R U C T U R E S
 *----------------------------------------------------------------------------------------
 */

UCODE_VS_FLAG (0600110F_Enc)

// Encrypt Patch code 0600110F for 6101 and equivalent

CONST UINT8 ROMDATA CpuF15TnMicrocodePatch0600110F_Enc [IDS_PAD_4K] =
{
  0x12,
  0x20,
  0x11,
  0x01,
  0x0f,
  0x11,
  0x00,
  0x06,
  0x02,
  0x80,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x01,
  0x61,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0xd4,
  0x3d,
  0x97,
  0xf0,
  0xd2,
  0x1a,
  0xcf,
  0x44,
  0x1d,
  0x45,
  0x82,
  0x13,
  0xec,
  0xcd,
  0x52,
  0x24,
  0x2d,
  0x26,
  0x73,
  0x9f,
  0x0e,
  0x38,
  0x80,
  0x5b,
  0x02,
  0x6a,
  0xd3,
  0x80,
  0x97,
  0xc0,
  0xe8,
  0x08,
  0xaf,
  0x52,
  0x2e,
  0xe4,
  0x54,
  0xa6,
  0xb3,
  0xb3,
  0x9b,
  0x21,
  0xb9,
  0xe1,
  0xa8,
  0xa4,
  0xed,
  0x9a,
  0x76,
  0xf7,
  0x62,
  0x13,
  0x3b,
  0xf8,
  0x21,
  0xc4,
  0xf3,
  0xff,
  0xb5,
  0x20,
  0xbd,
  0x8c,
  0x3a,
  0x4b,
  0x7e,
  0x44,
  0x88,
  0x9e,
  0x21,
  0xf3,
  0x32,
  0xad,
  0x96,
  0xf9,
  0x1d,
  0xe4,
  0xce,
  0xdd,
  0xb7,
  0x58,
  0x6c,
  0x3c,
  0x78,
  0x00,
  0x9f,
  0x9f,
  0x76,
  0x6e,
  0x92,
  0x80,
  0xb9,
  0x6a,
  0xcf,
  0x66,
  0x2b,
  0x7e,
  0x1d,
  0xbf,
  0x2d,
  0xca,
  0xde,
  0x58,
  0x1b,
  0xc6,
  0xb8,
  0x5e,
  0x82,
  0xc3,
  0xdf,
  0x8b,
  0xd8,
  0xdb,
  0xca,
  0x43,
  0xf2,
  0x75,
  0x40,
  0xb6,
  0xbf,
  0xdb,
  0x5f,
  0xb8,
  0xd2,
  0xdd,
  0x81,
  0xeb,
  0xa6,
  0x7f,
  0x01,
  0xbc,
  0x37,
  0x07,
  0x4e,
  0x73,
  0x13,
  0xcf,
  0x08,
  0xb9,
  0xd6,
  0xda,
  0xe6,
  0x10,
  0xd7,
  0x2c,
  0xfe,
  0x49,
  0x3e,
  0x4b,
  0xa0,
  0xfa,
  0xc1,
  0x81,
  0xe9,
  0xdb,
  0x70,
  0xfd,
  0x46,
  0xc4,
  0x44,
  0x4c,
  0x14,
  0xc2,
  0x1a,
  0x46,
  0xa5,
  0x2c,
  0xb3,
  0x04,
  0x15,
  0xda,
  0x53,
  0x74,
  0x41,
  0x61,
  0xcc,
  0xda,
  0x40,
  0x53,
  0x03,
  0x4a,
  0x51,
  0xc2,
  0x4f,
  0x81,
  0x34,
  0x89,
  0x4f,
  0x7c,
  0x7e,
  0xa0,
  0x50,
  0x7a,
  0xc8,
  0xf3,
  0xd0,
  0xfc,
  0x7f,
  0xda,
  0xa8,
  0x61,
  0x6c,
  0x46,
  0xb3,
  0xc9,
  0x05,
  0x0b,
  0x9f,
  0x5e,
  0xb1,
  0x43,
  0x9d,
  0xc0,
  0x3a,
  0xbe,
  0x6e,
  0x05,
  0x30,
  0x3d,
  0xf1,
  0xee,
  0x0e,
  0xcf,
  0x63,
  0x40,
  0xe9,
  0xd3,
  0x27,
  0x2c,
  0x0a,
  0x48,
  0xe8,
  0xae,
  0xc0,
  0x38,
  0xae,
  0x3b,
  0x41,
  0x21,
  0x5a,
  0xa2,
  0xc0,
  0x20,
  0x77,
  0x18,
  0x9b,
  0x7f,
  0xdd,
  0x95,
  0x4b,
  0x8b,
  0x83,
  0x2c,
  0xfb,
  0x49,
  0xd8,
  0x25,
  0xf2,
  0x21,
  0x6e,
  0x54,
  0xe5,
  0x01,
  0x22,
  0xd5,
  0xf8,
  0x99,
  0x1f,
  0x83,
  0x69,
  0x52,
  0xa1,
  0x9a,
  0x67,
  0x73,
  0x55,
  0xa2,
  0x98,
  0x82,
  0x8c,
  0xff,
  0xed,
  0x9c,
  0x0a,
  0x07,
  0x33,
  0x6f,
  0x16,
  0x39,
  0x79,
  0xcc,
  0xe3,
  0x5a,
  0xa0,
  0x2d,
  0xa6,
  0xdf,
  0x2e,
  0x4b,
  0xab,
  0x6c,
  0x6f,
  0xd4,
  0x6e,
  0x70,
  0x9b,
  0x9a,
  0xf3,
  0xb3,
  0x52,
  0xb8,
  0x05,
  0x53,
  0xba,
  0x79,
  0x08,
  0x6a,
  0xb1,
  0x5e,
  0xf7,
  0x85,
  0xc1,
  0xfc,
  0xd8,
  0xb5,
  0x3d,
  0xbb,
  0xb9,
  0x3d,
  0xa3,
  0x98,
  0x13,
  0x61,
  0xed,
  0x1e,
  0xc0,
  0x45,
  0x6c,
  0x98,
  0xfc,
  0x87,
  0x2c,
  0xb8,
  0x99,
  0x97,
  0xb8,
  0xc7,
  0x5f,
  0x2e,
  0x6d,
  0x28,
  0x79,
  0xaf,
  0x0b,
  0xf9,
  0x84,
  0x7e,
  0x34,
  0xd8,
  0x86,
  0x61,
  0x22,
  0xdb,
  0xf4,
  0xef,
  0x58,
  0x0d,
  0x4e,
  0xcf,
  0x02,
  0x8a,
  0xf8,
  0x17,
  0xab,
  0x7d,
  0x79,
  0x98,
  0x38,
  0x35,
  0x59,
  0xdf,
  0x03,
  0xff,
  0xed,
  0xc7,
  0x1f,
  0x25,
  0xe3,
  0x26,
  0x05,
  0xde,
  0x7f,
  0xbb,
  0xe4,
  0xff,
  0xbf,
  0x6d,
  0xc6,
  0xc2,
  0x2e,
  0x02,
  0x45,
  0x85,
  0x5f,
  0x43,
  0xdb,
  0xb8,
  0xd2,
  0x13,
  0xd7,
  0x52,
  0xde,
  0x53,
  0x49,
  0xda,
  0x7f,
  0x0b,
  0xb8,
  0x76,
  0x70,
  0xf9,
  0xfe,
  0xf0,
  0x27,
  0xb7,
  0xc9,
  0xd4,
  0x83,
  0x6d,
  0x80,
  0xaa,
  0x34,
  0x46,
  0xf5,
  0xe3,
  0x1f,
  0xd7,
  0x0f,
  0xf2,
  0xee,
  0x5a,
  0xb2,
  0xcd,
  0x08,
  0x47,
  0xe6,
  0xf7,
  0x99,
  0xd1,
  0x05,
  0x55,
  0x0f,
  0x5f,
  0x1d,
  0xab,
  0xd6,
  0xb3,
  0x32,
  0xaf,
  0xa1,
  0x57,
  0x4d,
  0x32,
  0x00,
  0x4f,
  0xf6,
  0x6f,
  0x6e,
  0x79,
  0x8a,
  0x7c,
  0xc2,
  0xef,
  0x7e,
  0xcd,
  0x83,
  0xac,
  0x85,
  0x0e,
  0x53,
  0x2c,
  0xd9,
  0x92,
  0xf5,
  0x55,
  0xf6,
  0xc9,
  0x41,
  0xed,
  0xf5,
  0x4e,
  0x41,
  0xea,
  0x97,
  0xca,
  0x3b,
  0x14,
  0xca,
  0x0d,
  0x4e,
  0xb9,
  0x5f,
  0x54,
  0x23,
  0xf1,
  0xdc,
  0x8b,
  0xa4,
  0xc1,
  0x52,
  0xe2,
  0x7a,
  0x8f,
  0xdf,
  0x3f,
  0x93,
  0xa1,
  0x84,
  0x5c,
  0xca,
  0x6a,
  0x3a,
  0x42,
  0x95,
  0x2e,
  0x71,
  0xf6,
  0xa2,
  0x88,
  0x56,
  0x32,
  0xe8,
  0x98,
  0x2a,
  0xb8,
  0xf0,
  0x65,
  0x95,
  0x01,
  0xb8,
  0xc8,
  0x23,
  0xe9,
  0x30,
  0x52,
  0x94,
  0xeb,
  0xfa,
  0x9f,
  0x67,
  0x53,
  0xf0,
  0x63,
  0x10,
  0x70,
  0x1b,
  0x01,
  0x71,
  0x21,
  0xb3,
  0x27,
  0x4e,
  0x37,
  0x04,
  0xdc,
  0x74,
  0x6f,
  0xf3,
  0x08,
  0x00,
  0x72,
  0x21,
  0x96,
  0xe5,
  0xc6,
  0x75,
  0xa8,
  0x14,
  0x6f,
  0xcf,
  0xd8,
  0x86,
  0xe3,
  0xb7,
  0xf3,
  0x8c,
  0xe4,
  0x71,
  0x03,
  0x60,
  0xd4,
  0x53,
  0xff,
  0x5a,
  0x07,
  0xc4,
  0xe5,
  0x6b,
  0xf4,
  0x8d,
  0x80,
  0x55,
  0x78,
  0x4f,
  0xf5,
  0x55,
  0x04,
  0x2e,
  0x61,
  0x05,
  0x46,
  0x51,
  0x56,
  0xf8,
  0x0a,
  0xf5,
  0x6e,
  0x08,
  0x85,
  0xfd,
  0x01,
  0x9a,
  0x90,
  0x5a,
  0xed,
  0x0e,
  0x44,
  0x49,
  0xff,
  0x48,
  0xbe,
  0x5b,
  0xc4,
  0xea,
  0xbb,
  0x38,
  0xa9,
  0x04,
  0xf3,
  0x6c,
  0x6b,
  0x41,
  0x85,
  0x59,
  0x18,
  0x38,
  0xd5,
  0x52,
  0x18,
  0x1d,
  0xdd,
  0xab,
  0x28,
  0xd9,
  0x05,
  0xfe,
  0xd9,
  0xc6,
  0xa9,
  0x25,
  0xf4,
  0xb5,
  0xcb,
  0x9c,
  0x1d,
  0xe8,
  0x6f,
  0x21,
  0xd3,
  0x5b,
  0x88,
  0x44,
  0x2c,
  0x10,
  0xaf,
  0x43,
  0xcc,
  0xe8,
  0x10,
  0x9d,
  0xc1,
  0xb2,
  0x14,
  0xae,
  0xa3,
  0x1d,
  0x05,
  0x97,
  0xca,
  0x45,
  0xef,
  0x5c,
  0x57,
  0x60,
  0x49,
  0x75,
  0x7d,
  0x80,
  0xd2,
  0x9e,
  0x44,
  0xf0,
  0xed,
  0x7e,
  0x32,
  0x3a,
  0x12,
  0xc6,
  0xff,
  0x07,
  0x0d,
  0xbf,
  0xcf,
  0x42,
  0xe5,
  0xde,
  0x44,
  0x19,
  0x70,
  0x22,
  0x76,
  0x6b,
  0x30,
  0x6f,
  0x8d,
  0x69,
  0x75,
  0x5d,
  0xc4,
  0x7e,
  0xf7,
  0x99,
  0xe1,
  0x37,
  0x84,
  0xee,
  0x97,
  0x5c,
  0x83,
  0xdf,
  0xd0,
  0xe9,
  0x1c,
  0xb0,
  0x9f,
  0x13,
  0x81,
  0x51,
  0x51,
  0xaf,
  0x61,
  0xb4,
  0x35,
  0x1f,
  0xe2,
  0x54,
  0xe9,
  0x68,
  0x75,
  0x3c,
  0xcc,
  0x51,
  0x9c,
  0x75,
  0x27,
  0x66,
  0xe7,
  0x95,
  0x7d,
  0x91,
  0xd8,
  0xf0,
  0xff,
  0x47,
  0xc6,
  0x51,
  0xb3,
  0xef,
  0x03,
  0xaf,
  0x61,
  0x59,
  0x95,
  0x43,
  0x14,
  0xce,
  0xdf,
  0x48,
  0xc8,
  0xea,
  0xbc,
  0x13,
  0x98,
  0xb9,
  0xcc,
  0x63,
  0x41,
  0x7f,
  0x9a,
  0xe0,
  0x41,
  0xd7,
  0xb7,
  0x7b,
  0x80,
  0xb5,
  0x3e,
  0x95,
  0xdc,
  0xc4,
  0x76,
  0xae,
  0x64,
  0x64,
  0x02,
  0x52,
  0xab,
  0x70,
  0x42,
  0x04,
  0x34,
  0xd4,
  0x74,
  0x7d,
  0xfd,
  0x88,
  0x0f,
  0x49,
  0x51,
  0x80,
  0x86,
  0x90,
  0xc1,
  0x55,
  0x12,
  0x62,
  0xfc,
  0xc0,
  0x1f,
  0x2b,
  0x79,
  0xbb,
  0xca,
  0x5e,
  0xa1,
  0x81,
  0xcf,
  0x2b,
  0x3b,
  0x10,
  0xd8,
  0x69,
  0x67,
  0xa8,
  0xc5,
  0xa2,
  0xfe,
  0xa4,
  0x71,
  0xcb,
  0x65,
  0x28,
  0xbe,
  0x8d,
  0x0c,
  0x00,
  0x6a,
  0xb0,
  0x99,
  0x4e,
  0x57,
  0xac,
  0x62,
  0x95,
  0x98,
  0xb7,
  0xaf,
  0x81,
  0xec,
  0xe7,
  0xe3,
  0x02,
  0x5e,
  0xc2,
  0x8b,
  0x2a,
  0x68,
  0x22,
  0xb7,
  0x4a,
  0x9c,
  0x6a,
  0x0d,
  0x75,
  0xbc,
  0xee,
  0xa6,
  0x01,
  0x6f,
  0xf7,
  0x4d,
  0x66,
  0x42,
  0x13,
  0xc2,
  0xe4,
  0xcb,
  0xe4,
  0x12,
  0xa3,
  0x94,
  0x9b,
  0x0a,
  0xfc,
  0x72,
  0xc4,
  0xbc,
  0xc0,
  0x8d,
  0x68,
  0x73,
  0x99,
  0xf2,
  0xd8,
  0x15,
  0x10,
  0x93,
  0x1e,
  0x3b,
  0x16,
  0x34,
  0x7b,
  0x48,
  0x15,
  0x1b,
  0x72,
  0x8c,
  0x3a,
  0xa7,
  0x14,
  0x73,
  0xee,
  0x44,
  0x9a,
  0x8a,
  0xa5,
  0x1d,
  0xec,
  0x10,
  0x5d,
  0xf8,
  0x58,
  0x5e,
  0x01,
  0xfe,
  0x05,
  0x23,
  0x39,
  0xc5,
  0xa5,
  0x60,
  0x9b,
  0xb7,
  0x11,
  0x5c,
  0x13,
  0x3d,
  0xd1,
  0xef,
  0x62,
  0x0e,
  0xbf,
  0x0a,
  0x9f,
  0xdd,
  0x1f,
  0x50,
  0x5f,
  0xb7,
  0xc8,
  0x48,
  0xd1,
  0xc5,
  0xd1,
  0xa8,
  0x97,
  0x03,
  0x27,
  0x34,
  0x63,
  0x8a,
  0xa9,
  0x14,
  0x00,
  0xdb,
  0xf7,
  0xbc,
  0xce,
  0x26,
  0xcd,
  0xea,
  0x30,
  0xdf,
  0x42,
  0xf8,
  0x04,
  0x85,
  0x1d,
  0xc3,
  0xfc,
  0xbf,
  0x68,
  0xb0,
  0x28,
  0xc6,
  0x72,
  0xba,
  0x3d,
  0x72,
  0x9e,
  0x8b,
  0x15,
  0x3f,
  0xa1,
  0x4b,
  0x0b,
  0xd3,
  0x14,
  0x51,
  0x75,
  0x5c,
  0x1f,
  0xa2,
  0x04,
  0x68,
  0xf0,
  0x76,
  0xb2,
  0x5d,
  0x05,
  0x60,
  0x4f,
  0x8b,
  0xa2,
  0x2a,
  0x0d,
  0x56,
  0x39,
  0x66,
  0x6d,
  0x1c,
  0xf3,
  0x86,
  0x86,
  0xc9,
  0xfd,
  0xdb,
  0x8c,
  0xe6,
  0xd1,
  0xb0,
  0xb3,
  0x66,
  0x0f,
  0xdf,
  0xbc,
  0x5c,
  0x0b,
  0x24,
  0x63,
  0x1e,
  0xe8,
  0x69,
  0x8b,
  0xf8,
  0x43,
  0x45,
  0x17,
  0x48,
  0x3a,
  0xe7,
  0xcd,
  0xb6,
  0x18,
  0xfe,
  0x39,
  0x01,
  0x27,
  0x98,
  0xf9,
  0xd1,
  0xcf,
  0xfb,
  0xc1,
  0x96,
  0x0b,
  0x0c,
  0x57,
  0x03,
  0x70,
  0x4b,
  0x51,
  0x81,
  0x28,
  0x40,
  0x8b,
  0xa6,
  0xcb,
  0xf7,
  0xd7,
  0x7e,
  0xb8,
  0x81,
  0x70,
  0xef,
  0xfb,
  0xc4,
  0x1c,
  0x8c,
  0x74,
  0x35,
  0xb5,
  0x85,
  0xbc,
  0xa4,
  0xbe,
  0xba,
  0x80,
  0x1e,
  0x2f,
  0x72,
  0xfb,
  0xe1,
  0x27,
  0xe1,
  0x3c,
  0xf6,
  0x99,
  0x8a,
  0xd8,
  0xe6,
  0xed,
  0x32,
  0x93,
  0x78,
  0x12,
  0xa9,
  0xd6,
  0x52,
  0x55,
  0xfa,
  0x6e,
  0xf9,
  0x3c,
  0xf1,
  0x6c,
  0x93,
  0x2e,
  0x82,
  0x70,
  0x9f,
  0x5c,
  0x8b,
  0x88,
  0x63,
  0x6e,
  0xc1,
  0xd0,
  0xec,
  0xe9,
  0x39,
  0x0b,
  0x42,
  0xb8,
  0xe9,
  0xaa,
  0xcd,
  0xfc,
  0x70,
  0xfa,
  0xb9,
  0x42,
  0xdd,
  0x58,
  0x32,
  0x5f,
  0x3c,
  0xaa,
  0xf3,
  0x24,
  0x64,
  0x61,
  0xc9,
  0x19,
  0xf7,
  0x8b,
  0x20,
  0xf6,
  0x78,
  0xfc,
  0xb1,
  0x51,
  0xa6,
  0x95,
  0x2c,
  0x2f,
  0x58,
  0x4e,
  0xab,
  0x08,
  0x58,
  0x9b,
  0xad,
  0x2c,
  0x30,
  0x13,
  0x66,
  0xcf,
  0xf2,
  0x5e,
  0x17,
  0x3f,
  0x60,
  0x78,
  0x07,
  0xa5,
  0x32,
  0xf3,
  0x0b,
  0xb7,
  0xab,
  0x9a,
  0x73,
  0x3e,
  0x0c,
  0xbe,
  0x3a,
  0x1a,
  0x95,
  0x77,
  0xe8,
  0xdf,
  0x78,
  0xc0,
  0xb5,
  0x43,
  0x26,
  0x35,
  0xd1,
  0x41,
  0x2b,
  0x81,
  0x31,
  0xd2,
  0x22,
  0xb4,
  0x8d,
  0xf7,
  0x51,
  0xd5,
  0xc5,
  0x06,
  0x17,
  0x7c,
  0x03,
  0xa3,
  0x97,
  0xb1,
  0xc2,
  0x86,
  0x7c,
  0xb4,
  0x98,
  0xca,
  0x88,
  0x6f,
  0x09,
  0x70,
  0xb9,
  0xb6,
  0x35,
  0x08,
  0xdc,
  0xc5,
  0x65,
  0xd3,
  0xf6,
  0x87,
  0x34,
  0xad,
  0xd9,
  0x4f,
  0x76,
  0x0a,
  0xc4,
  0xbb,
  0xfc,
  0x11,
  0xe3,
  0x31,
  0x2a,
  0x05,
  0x85,
  0x93,
  0xca,
  0xc3,
  0xfe,
  0x8c,
  0xe3,
  0x83,
  0xd3,
  0x88,
  0x2d,
  0x85,
  0xb1,
  0x33,
  0x04,
  0x7f,
  0x9e,
  0xdb,
  0x2b,
  0xc8,
  0xc9,
  0xbd,
  0x79,
  0xcd,
  0x9f,
  0xff,
  0xe7,
  0xee,
  0x9f,
  0x68,
  0xc6,
  0x7b,
  0x10,
  0x9a,
  0x7b,
  0x70,
  0x84,
  0x7b,
  0xdf,
  0x35,
  0xc1,
  0xf6,
  0x9f,
  0x9f,
  0x2b,
  0x59,
  0x69,
  0xb6,
  0xca,
  0x16,
  0xbd,
  0x7a,
  0x20,
  0xdf,
  0x1e,
  0xd4,
  0x6a,
  0x8c,
  0x23,
  0x44,
  0xfb,
  0x68,
  0x24,
  0xcf,
  0xf6,
  0x2f,
  0x20,
  0x1f,
  0xcf,
  0x32,
  0xdd,
  0x80,
  0xef,
  0x12,
  0x21,
  0x05,
  0xe7,
  0x4d,
  0xc9,
  0xd2,
  0x91,
  0x05,
  0x10,
  0xa9,
  0xfe,
  0x6f,
  0x49,
  0x6f,
  0x78,
  0x69,
  0x07,
  0xc9,
  0x60,
  0xae,
  0x14,
  0xa4,
  0x5c,
  0x3b,
  0xf5,
  0xd7,
  0x3d,
  0xe3,
  0x1a,
  0x88,
  0xb3,
  0x64,
  0x39,
  0x10,
  0x92,
  0xd2,
  0x8b,
  0x50,
  0x14,
  0x60,
  0x58,
  0x3e,
  0x59,
  0x32,
  0xbe,
  0x4c,
  0x91,
  0x72,
  0x0d,
  0x1c,
  0xde,
  0x97,
  0xd8,
  0xb3,
  0xc9,
  0x96,
  0x76,
  0xcb,
  0x7f,
  0x00,
  0x79,
  0x97,
  0x93,
  0x6e,
  0xa9,
  0x86,
  0x6e,
  0x47,
  0x62,
  0x49,
  0x66,
  0xd3,
  0xf0,
  0x00,
  0x41,
  0x25,
  0x01,
  0x82,
  0x99,
  0xfb,
  0x26,
  0x42,
  0x4c,
  0xa3,
  0xff,
  0x18,
  0x2e,
  0x8a,
  0x6a,
  0xda,
  0x68,
  0xa9,
  0x57,
  0x52,
  0x04,
  0x2f,
  0xd7,
  0xda,
  0x8a,
  0xdb,
  0xbf,
  0xf3,
  0x3b,
  0x3c,
  0xfc,
  0xa5,
  0xc1,
  0xf7,
  0xb7,
  0x7e,
  0x94,
  0x64,
  0x3c,
  0x36,
  0x00,
  0xc3,
  0x85,
  0xa2,
  0xfb,
  0x19,
  0xe6,
  0xc7,
  0x2f,
  0x7d,
  0xa4,
  0xf5,
  0x09,
  0x73,
  0x32,
  0x11,
  0x2c,
  0x1e,
  0xf2,
  0xf5,
  0x59,
  0xd5,
  0x15,
  0xbc,
  0x1d,
  0xe2,
  0x7b,
  0x2c,
  0xc7,
  0x48,
  0x4a,
  0x08,
  0xf3,
  0x1f,
  0x64,
  0xa6,
  0x44,
  0x55,
  0xf8,
  0xa8,
  0x4b,
  0x6f,
  0x3a,
  0x6f,
  0x94,
  0xcd,
  0xb1,
  0xf5,
  0x36,
  0xd7,
  0x6f,
  0x96,
  0x21,
  0xf6,
  0xdd,
  0x60,
  0xf9,
  0x6e,
  0x38,
  0x74,
  0xd7,
  0xf5,
  0x78,
  0xa9,
  0x64,
  0x39,
  0x4d,
  0xbf,
  0x79,
  0xaf,
  0xaf,
  0x34,
  0xbd,
  0x36,
  0x65,
  0x9f,
  0xe1,
  0xec,
  0xaf,
  0x29,
  0x3a,
  0x90,
  0x0c,
  0xdd,
  0xcd,
  0x98,
  0x05,
  0x39,
  0xca,
  0x95,
  0x5e,
  0x27,
  0x76,
  0xc6,
  0x95,
  0xc6,
  0x0b,
  0x01,
  0x0c,
  0xd0,
  0xfe,
  0x97,
  0xee,
  0x9c,
  0x39,
  0xc7,
  0x39,
  0xeb,
  0x38,
  0x04,
  0xc2,
  0x7f,
  0x8d,
  0x65,
  0x6c,
  0x27,
  0x7b,
  0xe3,
  0x52,
  0xd6,
  0x24,
  0x58,
  0x13,
  0xdc,
  0x0b,
  0xaa,
  0xe9,
  0xf5,
  0x96,
  0xbe,
  0x5c,
  0xc1,
  0x56,
  0xd2,
  0x82,
  0xa6,
  0x27,
  0xe8,
  0x4f,
  0xd8,
  0xc9,
  0x65,
  0x57,
  0x88,
  0xf5,
  0x5c,
  0xb4,
  0xca,
  0x3d,
  0x53,
  0x18,
  0x46,
  0x31,
  0xcc,
  0xba,
  0x2d,
  0x49,
  0x9e,
  0x34,
  0x29,
  0x56,
  0x68,
  0xad,
  0x07,
  0x0d,
  0x96,
  0xaa,
  0x44,
  0x15,
  0x54,
  0x5c,
  0x9b,
  0x96,
  0x83,
  0x70,
  0x5c,
  0x0f,
  0xbf,
  0x42,
  0x44,
  0x96,
  0xc3,
  0x86,
  0xdb,
  0x5b,
  0x88,
  0xd5,
  0xd7,
  0x19,
  0x80,
  0x5d,
  0x7f,
  0x65,
  0x24,
  0xda,
  0x49,
  0x43,
  0x9f,
  0xcb,
  0xdf,
  0x40,
  0xce,
  0x44,
  0x68,
  0xa9,
  0xf4,
  0x10,
  0x42,
  0xd7,
  0x75,
  0x60,
  0x60,
  0xd7,
  0xf4,
  0x24,
  0xa6,
  0x62,
  0x1e,
  0x16,
  0xa0,
  0xce,
  0x25,
  0x67,
  0x5d,
  0xd9,
  0xa7,
  0xcb,
  0x1b,
  0xb8,
  0x81,
  0x0a,
  0x9e,
  0xde,
  0xa4,
  0xe0,
  0x8b,
  0x26,
  0xd3,
  0x1f,
  0x9d,
  0x75,
  0x44,
  0xce,
  0x16,
  0xde,
  0xdd,
  0xa2,
  0xcb,
  0x5f,
  0xe5,
  0xad,
  0xe2,
  0x73,
  0xce,
  0xa4,
  0x9a,
  0x75,
  0x7e,
  0x5f,
  0xb3,
  0x4b,
  0x89,
  0x84,
  0x10,
  0x14,
  0x11,
  0xfa,
  0x61,
  0xdb,
  0x12,
  0x32,
  0x5d,
  0xd1,
  0x05,
  0x5e,
  0xbd,
  0x81,
  0x15,
  0x59,
  0xda,
  0xc9,
  0xb7,
  0x86,
  0xfd,
  0xdb,
  0xab,
  0xaa,
  0xed,
  0xf8,
  0xf0,
  0x7a,
  0x98,
  0x6b,
  0x00,
  0x4a,
  0xee,
  0x9b,
  0xa9,
  0xef,
  0xcb,
  0x73,
  0xc8,
  0x4b,
  0x9a,
  0xc1,
  0x1d,
  0xda,
  0xd7,
  0x02,
  0x0b,
  0x53,
  0xbb,
  0x16,
  0xdb,
  0x99,
  0xac,
  0xc5,
  0x24,
  0x30,
  0xec,
  0x62,
  0x22,
  0x3e,
  0xfd,
  0xa8,
  0x70,
  0x9d,
  0x90,
  0x83,
  0xa6,
  0x5c,
  0xaf,
  0x39,
  0x7e,
  0x04,
  0x7a,
  0x08,
  0x14,
  0xe4,
  0xd0,
  0x83,
  0xf3,
  0xe3,
  0x4c,
  0x07,
  0x2a,
  0xfd,
  0xc0,
  0xf9,
  0x4c,
  0x9d,
  0x2e,
  0x67,
  0xfd,
  0x39,
  0xbc,
  0xad,
  0x65,
  0x84,
  0xbc,
  0xd8,
  0x72,
  0x7a,
  0x8e,
  0x1b,
  0x72,
  0x33,
  0x7d,
  0x92,
  0x15,
  0x44,
  0xd0,
  0x03,
  0x56,
  0x80,
  0xee,
  0x2c,
  0x89,
  0x4a,
  0x0a,
  0x53,
  0xc8,
  0xeb,
  0x2a,
  0xb5,
  0x38,
  0xae,
  0x69,
  0x75,
  0x08,
  0x1d,
  0x07,
  0xa7,
  0xe7,
  0x3c,
  0xf0,
  0x22,
  0x02,
  0x7f,
  0x42,
  0xbf,
  0x00,
  0x86,
  0xef,
  0xc6,
  0x7b,
  0xff,
  0xd0,
  0x32,
  0x01,
  0xb0,
  0x9f,
  0xae,
  0x49,
  0x8f,
  0x4b,
  0x2b,
  0xa6,
  0x5f,
  0x11,
  0x1d,
  0xc8,
  0xd5,
  0x1c,
  0x49,
  0x41,
  0x09,
  0x55,
  0x61,
  0xb1,
  0xcf,
  0xf8,
  0x7b,
  0x5d,
  0x37,
  0xd7,
  0x3d,
  0xc9,
  0x6d,
  0xf0,
  0x7f,
  0x0f,
  0x40,
  0xf7,
  0xce,
  0xa9,
  0x45,
  0x25,
  0x89,
  0xe2,
  0x36,
  0x2e,
  0xe9,
  0x16,
  0x17,
  0xcb,
  0x86,
  0xea,
  0x6f,
  0x29,
  0xd9,
  0xbe,
  0xe3,
  0x5d,
  0x6f,
  0xa3,
  0xbd,
  0x94,
  0xfd,
  0x55,
  0x23,
  0x46,
  0x40,
  0xfc,
  0xa5,
  0xf4,
  0x0f,
  0xa2,
  0x63,
  0x2b,
  0x49,
  0x88,
  0x69,
  0xfb,
  0xac,
  0x4b,
  0xa4,
  0x06,
  0x8b,
  0x34,
  0xd6,
  0x57,
  0x71,
  0xf9,
  0x7a,
  0xa2,
  0xde,
  0x93,
  0xc4,
  0x20,
  0xb0,
  0x35,
  0xea,
  0x70,
  0x9f,
  0xdf,
  0x30,
  0x6e,
  0xbb,
  0x7e,
  0x6c,
  0x46,
  0x90,
  0x1c,
  0x0b,
  0xea,
  0x44,
  0x4b,
  0xdd,
  0xbd,
  0x89,
  0x0f,
  0x02,
  0x5a,
  0xaa,
  0x5a,
  0x2c,
  0x57,
  0xc3,
  0xf3,
  0xfc,
  0xf5,
  0xc2,
  0x89,
  0xb1,
  0x08,
  0x79,
  0x3c,
  0x8b,
  0xbe,
  0xc1,
  0xd5,
  0x53,
  0x62,
  0x52,
  0xc2,
  0xc9,
  0xba,
  0xa2,
  0xb8,
  0x02,
  0xc6,
  0xbd,
  0x51,
  0xda,
  0xf9,
  0xf7,
  0x8d,
  0x66,
  0xd0,
  0x10,
  0xb0,
  0xdf,
  0x52,
  0xd8,
  0x5c,
  0x2e,
  0x60,
  0x24,
  0xd7,
  0x2e,
  0x9b,
  0xc2,
  0x54,
  0xd3,
  0x6c,
  0x5d,
  0xb5,
  0x63,
  0xa9,
  0xf3,
  0x33,
  0x47,
  0xa0,
  0x46,
  0x7c,
  0x5b,
  0xd2,
  0xc2,
  0x2d,
  0xb0,
  0xa5,
  0x05,
  0x4b,
  0xf9,
  0xf3,
  0x11,
  0x8a,
  0x5b,
  0x71,
  0xcb,
  0x95,
  0x49,
  0x2f,
  0xfc,
  0xbc,
  0x2a,
  0x55,
  0xff,
  0xce,
  0x00,
  0x39,
  0x5f,
  0x43,
  0xf5,
  0x99,
  0x40,
  0xe3,
  0x3c,
  0x65,
  0x6c,
  0xcb,
  0x44,
  0x6f,
  0xb3,
  0x8f,
  0xdc,
  0xad,
  0x95,
  0x7a,
  0xa2,
  0x0a,
  0x76,
  0x21,
  0xf4,
  0x69,
  0x75,
  0x86,
  0xa7,
  0xff,
  0x30,
  0x4e,
  0x58,
  0x5f,
  0xe6,
  0xc1,
  0x2c,
  0x4f,
  0xa6,
  0xf7,
  0x6d,
  0x01,
  0xe0,
  0xc1,
  0x13,
  0xd1,
  0x49,
  0x66,
  0x32,
  0x4e,
  0x6c,
  0x6d,
  0x17,
  0xde,
  0xd9,
  0x05,
  0xf0,
  0x0e,
  0x4e,
  0x06,
  0x22,
  0xa2,
  0xa4,
  0x2c,
  0x74,
  0x6b,
  0x18,
  0x46,
  0x18,
  0x7b,
  0xab,
  0x95,
  0xfa,
  0xe4,
  0x56,
  0xdf,
  0x5d,
  0xc5,
  0x4d,
  0x5c,
  0x20,
  0xa0,
  0x42,
  0x80,
  0x86,
  0xd8,
  0x60,
  0x8f,
  0x17,
  0x6b,
  0xf9,
  0x33,
  0xa8,
  0xaf,
  0x7a,
  0x43,
  0x75,
  0x33,
  0x8e,
  0xc5,
  0x32,
  0x69,
  0xe7,
  0xd0,
  0xe5,
  0xc5,
  0xa4,
  0xf0,
  0xa5,
  0x10,
  0xc7,
  0xd1,
  0xff,
  0x52,
  0xa0,
  0xb8,
  0x05,
  0x7d,
  0x5f,
  0xf2,
  0x7e,
  0x85,
  0x59,
  0x95,
  0xf7,
  0x8b,
  0x26,
  0x68,
  0x69,
  0x93,
  0x1a,
  0x58,
  0x89,
  0x2e,
  0x79,
  0x99,
  0xdb,
  0x93,
  0x59,
  0x45,
  0xdc,
  0xda,
  0x8b,
  0xba,
  0xf3,
  0xe8,
  0x81,
  0xe2,
  0x43,
  0x65,
  0x68,
  0x36,
  0x6d,
  0x2c,
  0x69,
  0x0a,
  0xee,
  0x16,
  0xe0,
  0x94,
  0xfc,
  0xee,
  0x6b,
  0x52,
  0x9b,
  0xd0,
  0x2e,
  0x5e,
  0x9e,
  0x0a,
  0x83,
  0x74,
  0xab,
  0xa2,
  0xab,
  0xfd,
  0xb8,
  0x8e,
  0x18,
  0xf7,
  0x78,
  0x84,
  0xef,
  0xfc,
  0x0d,
  0xac,
  0x26,
  0x15,
  0x8b,
  0xd0,
  0x5e,
  0x95,
  0x26,
  0x33,
  0x2d,
  0x82,
  0x78,
  0xc8,
  0x00,
  0x07,
  0x21,
  0x94,
  0x19,
  0x25,
  0xd9,
  0x6c,
  0x47,
  0xae,
  0xa4,
  0xd5,
  0x7d,
  0x27,
  0xde,
  0xec,
  0xf1,
  0x59,
  0xb7,
  0x9a,
  0x02,
  0x57,
  0x91,
  0x54,
  0x06,
  0x89,
  0xb4,
  0xb5,
  0x12,
  0xea,
  0x95,
  0x89,
  0x10,
  0xad,
  0x7a,
  0xa0,
  0x05,
  0x33,
  0xaf,
  0xf4,
  0x7d,
  0x45,
  0x88,
  0xe9,
  0xc6,
  0xe8,
  0x2a,
  0x36,
  0x3f,
  0x44,
  0xd1,
  0x74,
  0x71,
  0x32,
  0x9b,
  0xe5,
  0x35,
  0x55,
  0xc8,
  0xb7,
  0x0c,
  0xc5,
  0xf0,
  0x7b,
  0x29,
  0x45,
  0xb8,
  0xc7,
  0x14,
  0xa2,
  0x1e,
  0x9a,
  0x3f,
  0xe5,
  0x94,
  0xf8,
  0xe6,
  0x70,
  0x62,
  0xaf,
  0x0e,
  0xd7,
  0xf8,
  0x05,
  0x61,
  0x65,
  0x48,
  0xfd,
  0xee,
  0x3e,
  0x55,
  0xff,
  0x14,
  0x59,
  0x18,
  0x0f,
  0x2f,
  0x20,
  0x52,
  0x20,
  0xde,
  0x15,
  0xcf,
  0x23,
  0x10,
  0xa2,
  0x1c,
  0x4c,
  0x84,
  0x81,
  0x21,
  0xb0,
  0x6b,
  0x25,
  0xa8,
  0x3e,
  0xc6,
  0xa4,
  0xc2,
  0x0a,
  0x46,
  0x52,
  0x4f,
  0x72,
  0x56,
  0x06,
  0xec,
  0x76,
  0xda,
  0x7e,
  0x09,
  0x45,
  0x05,
  0x9b,
  0xdb,
  0x31,
  0x90,
  0x63,
  0xdf,
  0x98,
  0x47,
  0x4a,
  0x9e,
  0x28,
  0x3d,
  0x0d,
  0x64,
  0xfb,
  0x44,
  0xc5,
  0xfb,
  0xe2,
  0x56,
  0xe9,
  0x08,
  0x98,
  0x79,
  0x2f,
  0xaf,
  0x15,
  0xb5,
  0xea,
  0x7e,
  0x61,
  0x89,
  0x16,
  0x5e,
  0x9c,
  0x6e,
  0xca,
  0x90,
  0x90,
  0x4a,
  0x5f,
  0x14,
  0x83,
  0x67,
  0x47,
  0x44,
  0xae,
  0x0a,
  0x83,
  0xc4,
  0x95,
  0xf6,
  0x88,
  0xc2,
  0xfb,
  0xa3,
  0x9b,
  0x7a,
  0xf9,
  0x32,
  0x80,
  0x94,
  0xf4,
  0x16,
  0x5a,
  0xd4,
  0xef,
  0x39,
  0xe8,
  0x86,
  0xe1,
  0xcd,
  0x6a,
  0x7e,
  0xca,
  0x33,
  0xa1,
  0xd4,
  0xcb,
  0xe9,
  0x5a,
  0xca,
  0xc6,
  0xb0,
  0xd9,
  0x68,
  0x27,
  0x8c,
  0x93,
  0x47,
  0x3e,
  0x4f,
  0xc0,
  0xa8,
  0x86,
  0x68,
  0x4b,
  0x1a,
  0xf5,
  0x93,
  0xdd,
  0x16,
  0xed,
  0x8e,
  0x27,
  0x66,
  0x4d,
  0x59,
  0xf0,
  0x27,
  0x1b,
  0x37,
  0xa0,
  0x25,
  0x9a,
  0x62,
  0xb4,
  0x6f,
  0xbd,
  0x83,
  0x28,
  0x0b,
  0x26,
  0xa9,
  0x07,
  0xac,
  0xb5,
  0x91,
  0x93,
  0x91,
};

/*----------------------------------------------------------------------------------------
 *           P R O T O T Y P E S     O F     L O C A L     F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                          E X P O R T E D    F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */