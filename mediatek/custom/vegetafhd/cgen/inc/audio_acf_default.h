/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_acf_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Tina Tsai
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_ACF_DEFAULT_H
#define AUDIO_ACF_DEFAULT_H

/* Compensation Filter HSF coeffs: default all pass filter       */
/* BesLoudness also uses this coeffs    */
#define BES_LOUDNESS_HSF_COEFF \
0x7cf4c25,   0xf06167b6,   0x7cf4c25,   0x7cefc306,   0x0,     \
0x7cb11ae,   0xf069dca4,   0x7cb11ae,   0x7cabc348,   0x0,     \
0x7b78e02,   0xf090e3fd,   0x7b78e02,   0x7b6dc47b,   0x0,     \
0x7a0343d,   0xf0bf9786,   0x7a0343d,   0x79eec5e7,   0x0,     \
0x7980936,   0xf0cfed93,   0x7980936,   0x7967c666,   0x0,     \
0x772a3e5,   0xf11ab836,   0x772a3e5,   0x76fbc8a7,   0x0,     \
0x7468828,   0xf172efb0,   0x7468828,   0x7417cb46,   0x0,     \
0x73743a9,   0xf19178ae,   0x73743a9,   0x7314cc2c,   0x0,     \
0x6f26907,   0xf21b2df2,   0x6f26907,   0x6e77d02a,   0x0,     \
    \
0x7eb571d,   0xf02951c5,   0x7eb571d,   0x7eb0c145,   0x0,     \
0x7e98001,   0xf02cfffe,   0x7e98001,   0x7e91c161,   0x0,     \
0x7e0e896,   0xf03e2ed4,   0x7e0e896,   0x7e02c1e5,   0x0,     \
0x7d669a2,   0xf0532cbb,   0x7d669a2,   0x7d51c283,   0x0,     \
0x7d2af5a,   0xf05aa14c,   0x7d2af5a,   0x7d11c2bb,   0x0,     \
0x7c13d5c,   0xf07d8548,   0x7c13d5c,   0x7be3c3bb,   0x0,     \
0x7abd80b,   0xf0a84fea,   0x7abd80b,   0x7a67c4ec,   0x0,     \
0x7a439e7,   0xf0b78c32,   0x7a439e7,   0x79dec557,   0x0,     \
0x78078fc,   0xf0ff0e09,   0x78078fc,   0x774ac73b,   0x0

#define BES_LOUDNESS_BPF_COEFF \
0x3fca815d,   0x3f607ea2,   0xc0d50000,     \
0x3fc68189,   0x3f527e76,   0xc0e70000,     \
0x3fb08270,   0x3f107d8f,   0xc13e0000,     \
0x3f9683c5,   0x3ec27c3a,   0xc1a70000,     \
0x3f8d844c,   0x3ea67bb3,   0xc1cc0000,     \
0x3f62872d,   0x3e2678d2,   0xc2770000,     \
    \
0x3c49a40f,   0x34d25bf0,   0xcee40000,     \
0x3bfea8ba,   0x33f25745,   0xd00e0000,     \
0x3ab4c066,   0x300f3f99,   0xd53c0000,     \
0x3940df8c,   0x2bb22073,   0xdb0c0000,     \
0x38c4eaa8,   0x2a3b1557,   0xdcff0000,     \
0x36a61a46,   0x23dce5b9,   0xe57d0000,     \
    \
0x3dd39a8e,   0x33486571,   0xcee40000,     \
0x3da79db0,   0x3249624f,   0xd00e0000,     \
0x3ce6ad78,   0x2ddd5287,   0xd53c0000,     \
0x3c0cc28b,   0x28e63d74,   0xdb0c0000,     \
0x3bc3ca49,   0x273c35b6,   0xdcff0000,     \
0x3a86ee57,   0x1ffb11a8,   0xe57d0000,     \
    \
0x3ed7a3a4,   0x39485c5b,   0xc7df0000,     \
0x3ebfa900,   0x38ba56ff,   0xc8860000,     \
0x3e50c514,   0x36353aeb,   0xcb790000,     \
0x3dd0eb63,   0x334b149c,   0xcee40000,     \
0x3da4f939,   0x324d06c6,   0xd00e0000,     \
0x3ce1342a,   0x2de2cbd5,   0xd53c0000,     \
    \
0x3ed79104,   0x39486efb,   0xc7df0000,     \
0x3ebf9346,   0x38ba6cb9,   0xc8860000,     \
0x3e509f1d,   0x363560e2,   0xcb790000,     \
0x3dd0b005,   0x334b4ffa,   0xcee40000,     \
0x3da4b687,   0x324d4978,   0xd00e0000,     \
0x3ce1d724,   0x2de228db,   0xd53c0000,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0

#define BES_LOUDNESS_LPF_COEFF \
0x1ac33586,   0x1ac3e25f,   0xf2940000,     \
0x1ecb3d96,   0x1ecbd4fc,   0xefd50000,     \
0x37b36f66,   0x37b391ad,   0xcf840000,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0
#define BES_LOUDNESS_WS_GAIN_MAX  0x0
#define BES_LOUDNESS_WS_GAIN_MIN  0x0
#define BES_LOUDNESS_FILTER_FIRST  0x0
#define BES_LOUDNESS_ATT_TIME  0x10e50054
#define BES_LOUDNESS_REL_TIME  0x263
#define BES_LOUDNESS_GAIN_MAP_IN \
0xd5, 0xda, 0xe8, 0xfb, 0x6
#define BES_LOUDNESS_GAIN_MAP_OUT \
0x0, 0x0, 0x0, 0x0, 0x0
#endif
