/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 * 
 * MediaTek Inc. (C) 2010. All rights reserved.
 * 
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _INPUT_H
#define _INPUT_H


#define KEY_RESERVED 0
#define KEY_ESC 1
#define KEY_1 2
#define KEY_2 3
#define KEY_3 4
#define KEY_4 5
#define KEY_5 6
#define KEY_6 7
#define KEY_7 8
#define KEY_8 9
#define KEY_9 10
#define KEY_0 11
#define KEY_MINUS 12
#define KEY_EQUAL 13
#define KEY_BACKSPACE 14
#define KEY_TAB 15
#define KEY_Q 16
#define KEY_W 17
#define KEY_E 18
#define KEY_R 19
#define KEY_T 20
#define KEY_Y 21
#define KEY_U 22
#define KEY_I 23
#define KEY_O 24
#define KEY_P 25
#define KEY_LEFTBRACE 26
#define KEY_RIGHTBRACE 27
#define KEY_ENTER 28
#define KEY_LEFTCTRL 29
#define KEY_A 30
#define KEY_S 31
#define KEY_D 32
#define KEY_F 33
#define KEY_G 34
#define KEY_H 35
#define KEY_J 36
#define KEY_K 37
#define KEY_L 38
#define KEY_SEMICOLON 39
#define KEY_APOSTROPHE 40
#define KEY_GRAVE 41
#define KEY_LEFTSHIFT 42
#define KEY_BACKSLASH 43
#define KEY_Z 44
#define KEY_X 45
#define KEY_C 46
#define KEY_V 47
#define KEY_B 48
#define KEY_N 49
#define KEY_M 50
#define KEY_COMMA 51
#define KEY_DOT 52
#define KEY_SLASH 53
#define KEY_RIGHTSHIFT 54
#define KEY_KPASTERISK 55
#define KEY_LEFTALT 56
#define KEY_SPACE 57
#define KEY_CAPSLOCK 58
#define KEY_F1 59
#define KEY_F2 60
#define KEY_F3 61
#define KEY_F4 62
#define KEY_F5 63
#define KEY_F6 64
#define KEY_F7 65
#define KEY_F8 66
#define KEY_F9 67
#define KEY_F10 68
#define KEY_NUMLOCK 69
#define KEY_SCROLLLOCK 70
#define KEY_KP7 71
#define KEY_KP8 72
#define KEY_KP9 73
#define KEY_KPMINUS 74
#define KEY_KP4 75
#define KEY_KP5 76
#define KEY_KP6 77
#define KEY_KPPLUS 78
#define KEY_KP1 79
#define KEY_KP2 80
#define KEY_KP3 81
#define KEY_KP0 82
#define KEY_KPDOT 83

#define KEY_ZENKAKUHANKAKU 85
#define KEY_102ND 86
#define KEY_F11 87
#define KEY_F12 88
#define KEY_RO 89
#define KEY_KATAKANA 90
#define KEY_HIRAGANA 91
#define KEY_HENKAN 92
#define KEY_KATAKANAHIRAGANA 93
#define KEY_MUHENKAN 94
#define KEY_KPJPCOMMA 95
#define KEY_KPENTER 96
#define KEY_RIGHTCTRL 97
#define KEY_KPSLASH 98
#define KEY_SYSRQ 99
#define KEY_RIGHTALT 100
#define KEY_LINEFEED 101
#define KEY_HOME 102
#define KEY_UP 103
#define KEY_PAGEUP 104
#define KEY_LEFT 105
#define KEY_RIGHT 106
#define KEY_END 107
#define KEY_DOWN 108
#define KEY_PAGEDOWN 109
#define KEY_INSERT 110
#define KEY_DELETE 111
#define KEY_MACRO 112
#define KEY_MUTE 113
#define KEY_VOLUMEDOWN 114
#define KEY_VOLUMEUP 115
#define KEY_POWER 116
#define KEY_KPEQUAL 117
#define KEY_KPPLUSMINUS 118
#define KEY_PAUSE 119

#define KEY_KPCOMMA 121
#define KEY_HANGEUL 122
#define KEY_HANGUEL KEY_HANGEUL
#define KEY_HANJA 123
#define KEY_YEN 124
#define KEY_LEFTMETA 125
#define KEY_RIGHTMETA 126
#define KEY_COMPOSE 127

#define KEY_STOP 128
#define KEY_AGAIN 129
#define KEY_PROPS 130
#define KEY_UNDO 131
#define KEY_FRONT 132
#define KEY_COPY 133
#define KEY_OPEN 134
#define KEY_PASTE 135
#define KEY_FIND 136
#define KEY_CUT 137
#define KEY_HELP 138
#define KEY_MENU 139
#define KEY_CALC 140
#define KEY_SETUP 141
#define KEY_SLEEP 142
#define KEY_WAKEUP 143
#define KEY_FILE 144
#define KEY_SENDFILE 145
#define KEY_DELETEFILE 146
#define KEY_XFER 147
#define KEY_PROG1 148
#define KEY_PROG2 149
#define KEY_WWW 150
#define KEY_MSDOS 151
#define KEY_COFFEE 152
#define KEY_DIRECTION 153
#define KEY_CYCLEWINDOWS 154
#define KEY_MAIL 155
#define KEY_BOOKMARKS 156
#define KEY_COMPUTER 157
#define KEY_BACK 158
#define KEY_FORWARD 159
#define KEY_CLOSECD 160
#define KEY_EJECTCD 161
#define KEY_EJECTCLOSECD 162
#define KEY_NEXTSONG 163
#define KEY_PLAYPAUSE 164
#define KEY_PREVIOUSSONG 165
#define KEY_STOPCD 166
#define KEY_RECORD 167
#define KEY_REWIND 168
#define KEY_PHONE 169
#define KEY_ISO 170
#define KEY_CONFIG 171
#define KEY_HOMEPAGE 172
#define KEY_REFRESH 173
#define KEY_EXIT 174
#define KEY_MOVE 175
#define KEY_EDIT 176
#define KEY_SCROLLUP 177
#define KEY_SCROLLDOWN 178
#define KEY_KPLEFTPAREN 179
#define KEY_KPRIGHTPAREN 180
#define KEY_NEW 181
#define KEY_REDO 182

#define KEY_F13 183
#define KEY_F14 184
#define KEY_F15 185
#define KEY_F16 186
#define KEY_F17 187
#define KEY_F18 188
#define KEY_F19 189
#define KEY_F20 190
#define KEY_F21 191
#define KEY_F22 192
#define KEY_F23 193
#define KEY_F24 194

#define KEY_PLAYCD 200
#define KEY_PAUSECD 201
#define KEY_PROG3 202
#define KEY_PROG4 203
#define KEY_SUSPEND 205
#define KEY_CLOSE 206
#define KEY_PLAY 207
#define KEY_FASTFORWARD 208
#define KEY_BASSBOOST 209
#define KEY_PRINT 210
#define KEY_HP 211
#define KEY_CAMERA 212
#define KEY_SOUND 213
#define KEY_QUESTION 214
#define KEY_EMAIL 215
#define KEY_CHAT 216
#define KEY_SEARCH 217
#define KEY_CONNECT 218
#define KEY_FINANCE 219
#define KEY_SPORT 220
#define KEY_SHOP 221
#define KEY_ALTERASE 222
#define KEY_CANCEL 223
#define KEY_BRIGHTNESSDOWN 224
#define KEY_BRIGHTNESSUP 225
#define KEY_MEDIA 226

#define KEY_STAR 227
#define KEY_SHARP 228
#define KEY_SOFT1 229
#define KEY_SOFT2 230
#define KEY_SEND 231
#define KEY_CENTER 232
#define KEY_HEADSETHOOK 233
#define KEY_0_5 234
#define KEY_2_5 235

#define KEY_SWITCHVIDEOMODE 236
#define KEY_KBDILLUMTOGGLE 237
#define KEY_KBDILLUMDOWN 238
#define KEY_KBDILLUMUP 239

#define KEY_SEND 231
#define KEY_REPLY 232
#define KEY_FORWARDMAIL 233
#define KEY_SAVE 234
#define KEY_DOCUMENTS 235

#define KEY_BATTERY 236

#define KEY_UNKNOWN 240
#define KEY_APP_SWITCH 252



#define KEY_OK 0x160
#define KEY_SELECT 0x161
#define KEY_GOTO 0x162
#define KEY_CLEAR 0x163
#define KEY_POWER2 0x164
#define KEY_OPTION 0x165
#define KEY_INFO 0x166
#define KEY_TIME 0x167
#define KEY_VENDOR 0x168
#define KEY_ARCHIVE 0x169
#define KEY_PROGRAM 0x16a
#define KEY_CHANNEL 0x16b
#define KEY_FAVORITES 0x16c
#define KEY_EPG 0x16d
#define KEY_PVR 0x16e
#define KEY_MHP 0x16f
#define KEY_LANGUAGE 0x170
#define KEY_TITLE 0x171
#define KEY_SUBTITLE 0x172
#define KEY_ANGLE 0x173
#define KEY_ZOOM 0x174
#define KEY_MODE 0x175
#define KEY_KEYBOARD 0x176
#define KEY_SCREEN 0x177
#define KEY_PC 0x178
#define KEY_TV 0x179
#define KEY_TV2 0x17a
#define KEY_VCR 0x17b
#define KEY_VCR2 0x17c
#define KEY_SAT 0x17d
#define KEY_SAT2 0x17e
#define KEY_CD 0x17f
#define KEY_TAPE 0x180
#define KEY_RADIO 0x181
#define KEY_TUNER 0x182
#define KEY_PLAYER 0x183
#define KEY_TEXT 0x184
#define KEY_DVD 0x185
#define KEY_AUX 0x186
#define KEY_MP3 0x187
#define KEY_AUDIO 0x188
#define KEY_VIDEO 0x189
#define KEY_DIRECTORY 0x18a
#define KEY_LIST 0x18b
#define KEY_MEMO 0x18c
#define KEY_CALENDAR 0x18d
#define KEY_RED 0x18e
#define KEY_GREEN 0x18f
#define KEY_YELLOW 0x190
#define KEY_BLUE 0x191
#define KEY_CHANNELUP 0x192
#define KEY_CHANNELDOWN 0x193
#define KEY_FIRST 0x194
#define KEY_LAST 0x195
#define KEY_AB 0x196
#define KEY_NEXT 0x197
#define KEY_RESTART 0x198
#define KEY_SLOW 0x199
#define KEY_SHUFFLE 0x19a
#define KEY_BREAK 0x19b
#define KEY_PREVIOUS 0x19c
#define KEY_DIGITS 0x19d
#define KEY_TEEN 0x19e
#define KEY_TWEN 0x19f

#define KEY_DEL_EOL 0x1c0
#define KEY_DEL_EOS 0x1c1
#define KEY_INS_LINE 0x1c2
#define KEY_DEL_LINE 0x1c3

#define KEY_FN 0x1d0
#define KEY_FN_ESC 0x1d1
#define KEY_FN_F1 0x1d2
#define KEY_FN_F2 0x1d3
#define KEY_FN_F3 0x1d4
#define KEY_FN_F4 0x1d5
#define KEY_FN_F5 0x1d6
#define KEY_FN_F6 0x1d7
#define KEY_FN_F7 0x1d8
#define KEY_FN_F8 0x1d9
#define KEY_FN_F9 0x1da
#define KEY_FN_F10 0x1db
#define KEY_FN_F11 0x1dc
#define KEY_FN_F12 0x1dd
#define KEY_FN_1 0x1de
#define KEY_FN_2 0x1df
#define KEY_FN_D 0x1e0
#define KEY_FN_E 0x1e1
#define KEY_FN_F 0x1e2
#define KEY_FN_S 0x1e3
#define KEY_FN_B 0x1e4

#define KEY_BRL_DOT1 0x1f1
#define KEY_BRL_DOT2 0x1f2
#define KEY_BRL_DOT3 0x1f3
#define KEY_BRL_DOT4 0x1f4
#define KEY_BRL_DOT5 0x1f5
#define KEY_BRL_DOT6 0x1f6
#define KEY_BRL_DOT7 0x1f7
#define KEY_BRL_DOT8 0x1f8

#define KEY_MIN_INTERESTING KEY_MUTE
#define KEY_MAX 0x1ff

#endif
