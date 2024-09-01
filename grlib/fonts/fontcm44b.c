//*****************************************************************************
//
// fontcm44b.c - Font definition for the 44pt Cm bold font.
//
// Copyright (c) 2011-2020 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.2.0.295 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cm
//     Size: 44 point
//     Bold: yes
//     Italic: no
//     Memory usage: 5692 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 44 point Cm bold font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm44bData[5489] =
{
      5,  18,   0, 101,  32,  37,  11, 240, 147, 117,  87,  71,
     71,  71,  71,  85, 101, 101, 101, 101, 101, 101, 116, 115,
    131, 131, 131, 131, 131, 146, 240, 240, 179, 117,  87,  71,
     71,  85, 115,   0,  15, 112,  41,  22,   0,   8,  67, 131,
    117, 101,  86,  86,  87,  71,  71,  71,  86,  86,  84,  17,
     84,  17, 146, 146, 146, 146, 145, 161, 161, 161, 146, 146,
    130, 146, 146, 146, 130, 146, 145, 161,   0,  72,  64, 124,
     36,   0,  15,  50, 130, 240, 146, 115, 240, 131, 115, 240,
    131, 115, 240, 131,  99, 240, 131, 115, 240, 131, 115, 240,
    131, 114, 240, 146, 115, 240, 131, 115, 240, 131, 115, 240,
    131, 114, 240, 146, 115, 207,  15,   2,  79,  15,   2,  79,
     15,   2, 242, 115, 240, 131, 115, 240, 131, 115, 240, 131,
     99, 240, 131, 115, 240, 131, 115, 240, 131, 114, 255,  15,
      2,  79,  15,   2,  79,  15,   2, 195, 114, 240, 146, 115,
    240, 131, 115, 240, 131, 115, 240, 131, 114, 240, 146, 115,
    240, 131, 115, 240, 131, 115, 240, 131, 114, 240, 146, 115,
    240, 131, 115, 240, 131, 115, 240, 131, 114, 240, 146, 130,
      0,  11,  48,  86,  22, 130, 240,  82, 240,  82, 240,  41,
    189, 132,  34,  52, 100,  50,  82,  99,  66,  53,  68,  66,
     38,  68,  66,  38,  68,  66,  38,  69,  50,  38,  70,  34,
     52,  87,  18, 218, 205, 173, 173, 173, 187, 218, 194,  38,
     84,  50,  53,  70,  34,  53,  70,  34,  68,  70,  34,  68,
     70,  34,  68,  69,  50,  68,  82,  82,  67,  99,  66,  52,
    100,  50,  51, 132,  34,  21, 156, 200, 240,  34, 240,  82,
    240,  82,   0,  23,  64, 121,  36,  84, 240,  34, 184, 228,
    148,  52, 180, 148,  85, 118, 148,  95,   2, 149,  98,  54,
     19, 165,  98, 148, 165,  98, 132, 181,  98, 131, 197,  98,
    116, 197,  98, 100, 213,  98,  99, 229,  98,  84, 244,  97,
     84, 240,  20,  82,  83, 240,  52,  66,  68, 240,  67,  50,
     68, 240, 102,  83, 240, 240,  36, 240, 240,  35, 118, 240,
     67, 100,  34, 240,  52,  84,  66, 240,  35, 100,  66, 240,
     19, 116,  82, 228, 101,  82, 227, 117,  82, 211, 133,  82,
    196, 133,  82, 195, 149,  82, 179, 165,  82, 164, 165,  82,
    163, 196,  67, 147, 212,  66, 148, 228,  35, 147, 240,  23,
    163, 240,  37,   0,  41,  48,  93,  34,   0,   9,  85, 240,
    200, 240, 164,  50, 240, 149,  66, 240, 132,  82, 240, 117,
     82, 240, 117,  82, 240, 117,  82, 240, 117,  66, 240, 133,
     66, 240, 133,  50, 240, 150,  19, 240, 165,  18, 122, 151,
    138, 150, 210, 214, 195, 230, 178, 231, 162, 233, 131, 211,
     22, 130, 212,  38,  99, 196,  55,  82, 197,  71,  50, 213,
     86,  35, 213, 102,  18, 229, 119, 246, 103, 146,  70, 119,
    130,  70, 120,  98, 102,  68,  22,  67, 124,  74, 182, 150,
      0,  47,  96,  24,  11, 240, 240,  83, 117,  86,  87,  71,
     86,  84,  17, 146, 146, 145, 161, 146, 130, 146, 130, 145,
      0,  36,  96,  48,  15, 146, 195, 179, 179, 195, 179, 180,
    179, 180, 180, 164, 180, 165, 165, 165, 164, 180, 165, 165,
    165, 165, 165, 165, 165, 165, 165, 165, 165, 165, 180, 181,
    165, 165, 180, 180, 181, 180, 180, 196, 195, 196, 195, 211,
    211, 210,  64,  48,  15,   2, 211, 211, 211, 196, 195, 196,
    195, 196, 180, 196, 180, 181, 165, 165, 180, 181, 165, 165,
    165, 165, 165, 165, 165, 165, 165, 165, 165, 165, 164, 180,
    165, 165, 164, 180, 164, 180, 179, 180, 179, 179, 195, 179,
    179, 194, 208,  47,  20, 114, 240,  36, 240,  20, 240,  20,
    163,  52,  51,  68,  50,  52,  69,  34,  37,  70,  18,  22,
    108, 182, 230, 188, 102,  18,  22,  69,  34,  37,  68,  50,
     52,  67,  52,  51, 164, 240,  20, 240,  20, 240,  34,   0,
     63, 112,  66,  33,   0,  34,  83, 240, 243, 240, 243, 240,
    243, 240, 243, 240, 243, 240, 243, 240, 243, 240, 243, 240,
    243, 240, 243, 240, 243, 240, 243, 240,  47,  14,  79,  14,
     79,  14, 240,  35, 240, 243, 240, 243, 240, 243, 240, 243,
    240, 243, 240, 243, 240, 243, 240, 243, 240, 243, 240, 243,
    240, 243, 240, 243, 240, 243,   0,  31,  22,  11,   0,  37,
     51, 117,  86,  87,  71,  86,  86, 146, 146, 145, 161, 146,
    130, 146, 130, 145, 240, 240,  11,  16,   0,  44,  12,  76,
     76,  76,   0,  38,  64,  14,  11,   0,  37,  51, 117,  87,
     71,  71,  85, 115,   0,  15, 112,  93,  21, 242, 240,  51,
    240,  51, 240,  50, 240,  51, 240,  51, 240,  50, 240,  51,
    240,  51, 240,  35, 240,  51, 240,  51, 240,  35, 240,  51,
    240,  51, 240,  35, 240,  51, 240,  51, 240,  35, 240,  51,
    240,  51, 240,  35, 240,  51, 240,  51, 240,  35, 240,  51,
    240,  51, 240,  35, 240,  51, 240,  51, 240,  35, 240,  51,
    240,  51, 240,  35, 240,  51, 240,  51, 240,  35, 240,  51,
    240,  51, 240,  35, 240,  51, 240,  50, 240,  51, 240,  51,
    240,  50, 240,  64,  63,  23,   0,  12,  39, 235, 181,  53,
    149,  85, 132, 116, 117, 117, 101, 117, 101, 117, 101, 118,
     70, 118,  70, 118,  70, 118,  70, 118,  70, 118,  70, 118,
     70, 118,  70, 118,  70, 118,  70, 118,  70, 118,  70, 118,
     70, 118,  85, 117, 101, 117, 101, 117, 116, 116, 133,  85,
    149,  53, 187, 231,   0,  32, 112,  38,  20,   0,  11,  18,
    240,  20, 230, 155, 149,  21, 245, 245, 245, 245, 245, 245,
    245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245,
    245, 245, 245, 245, 245, 175,  95,   0,  28,  63,  22,   0,
     11,  87, 219, 163,  70, 131, 102, 116, 102,  86,  86,  86,
    102,  70, 102,  70, 102,  84, 118,  84, 118, 240,  22, 246,
    240,  22, 240,  21, 240,  21, 240,  21, 240,  35, 240,  51,
    240,  51, 240,  51, 114, 147, 130, 146, 131, 130, 147, 126,
    127, 111,   1, 111,   1,  95,   2,  95,   2,   0,  30, 112,
     62,  22,   0,  11, 102, 234, 179,  69, 147,  86, 133,  69,
    118,  70, 103,  54, 102,  70, 117,  70, 131,  85, 240,  21,
    240,  37, 240,  20, 246, 240,  23, 240,  69, 240,  38, 240,
     38, 240,  22, 240,  23, 100,  87,  86,  71,  71,  71,  71,
     71,  71,  71,  70,  86,  99, 102, 132,  55, 155, 215,   0,
     31,  64,  63,  23,   0,  13,  34, 240,  83, 240,  68, 240,
     68, 240,  53, 240,  38, 240,  38, 240,  23, 242,  21, 242,
     21, 226,  37, 210,  53, 210,  53, 194,  69, 178,  85, 178,
     85, 162, 101, 146, 117, 146, 117, 130, 133, 114, 149, 127,
      4,  79,   4, 245, 240,  53, 240,  53, 240,  53, 240,  53,
    221, 173,   0,  32,  16,  58,  22,   0,  11,  34, 177, 132,
    115, 142, 141, 156, 171, 186, 200, 226, 240,  82, 240,  82,
    240,  82,  38, 204, 164,  84, 147, 101, 130, 133, 240,  37,
    240,  38, 240,  22, 240,  22,  99, 118,  85, 102,  70, 102,
     70, 102,  70, 101, 100, 117,  98, 133, 131,  85, 171, 214,
      0,  31,  80,  63,  22,   0,  12,   6, 233, 196,  67, 164,
     84, 132,  85, 117,  70, 117,  70, 101, 101, 101, 115, 117,
    240,  37, 240,  22,  37, 150,  24, 120,  53, 103,  84, 103,
     85,  86, 101,  86, 102,  70, 102,  70, 102,  70, 102,  70,
    102,  85, 102,  85, 102,  85, 101, 116, 101, 117,  84, 149,
     53, 170, 230,   0,  31,  64,  71,  23,   0,   8,  98, 240,
     99, 240,  95,   3,  95,   3,  79,   3,  95,   2, 111,   1,
    127,   1, 114, 178, 130, 162, 146, 147, 146, 131, 240,  82,
    240,  83, 240,  67, 240,  83, 240,  68, 240,  68, 240,  52,
    240,  68, 240,  68, 240,  53, 240,  53, 240,  53, 240,  38,
    240,  38, 240,  38, 240,  38, 240,  38, 240,  38, 240,  38,
    240,  52,   0,  30,  64,  58,  22,   0,  11, 102, 234, 180,
     68, 147, 116, 131, 131, 131, 132, 100, 132, 100, 132, 102,
    100, 103,  83, 136,  36, 141, 170, 203, 203, 188, 147,  26,
    115,  72, 100,  88,  83, 134,  68, 149,  68, 164,  68, 164,
     68, 164,  68, 163, 100, 147, 100, 131, 133,  84, 155, 215,
      0,  31,  64,  63,  22,   0,  11, 102, 234, 181,  52, 149,
     69, 117, 100, 117, 101,  86, 101,  86, 101,  86, 102,  70,
    102,  70, 102,  70, 102,  70, 102,  70, 102,  85, 102,  85,
     87, 101,  71, 116,  56, 135,  22, 164,  38, 240,  21, 240,
     37, 116, 101, 101, 101, 102,  84, 117,  84, 133,  84, 147,
     69, 185, 230,   0,  31,  96,  23,  11,   0,  19,  67, 117,
     87,  71,  71,  85, 115,   0,   9,  35, 117,  87,  71,  71,
     85, 115,   0,  15, 112,  31,  11,   0,  19,  67, 117,  87,
     71,  71,  85, 115,   0,   9,  35, 117,  87,  71,  71,  86,
    101, 146, 146, 145, 146, 146, 130, 146, 130, 145, 240, 240,
     36,  11,   0,  15,  51, 117,  87,  71,  71,  85, 115,   0,
      6,  67, 131, 131, 131, 131, 131, 131, 117, 101, 101, 101,
    101, 101, 101,  87,  71,  71,  71,  71,  85, 115, 240, 208,
     21,  33,   0,  66,  15,  14,  79,  14,  79,  14,   0,  29,
     63,  14,  79,  14,  79,  14,   0,  66,  64,  55,  21,   0,
     29,  84, 240,  22, 231, 231, 231, 246, 240,  20,   0,  12,
     98, 240,  66, 240,  66, 240,  66, 240,  66, 240,  51, 240,
     51, 240,  50, 240,  51, 240,  36, 245, 246, 245, 100,  86,
     86,  70,  86,  70,  86,  70,  86,  85, 115, 101,  99, 140,
    184,   0,   6,  48,  57,  21,   0,   5, 119, 204, 116,  86,
     99, 117,  86,  86,  70,  86,  70,  86,  70,  86,  84, 101,
    246, 230, 244, 240,  20, 240,  35, 240,  50, 240,  51, 240,
     51, 240,  50, 240,  66, 240,  66, 240,  66, 240,  66,   0,
     10,  20, 240,  22, 231, 232, 215, 246, 240,  20,   0,  30,
     32, 111,  34,   0,   9, 120, 240, 142, 240,  53, 133, 244,
    196, 211, 240,  19, 179, 240,  51, 162, 118, 115, 130, 105,
    114, 115,  85,  51,  99,  98,  85,  83,  98,  98,  69, 117,
     50,  98,  69, 117,  51,  66,  69, 133,  66,  66,  69, 133,
     66,  66,  69, 133,  66,  66,  69, 133,  66,  66,  69, 133,
     66,  66,  69, 133,  66,  66,  69, 133,  66,  66,  69, 133,
     66,  67,  69, 117,  66,  82,  69, 117,  66,  82,  85, 101,
     50,  99,  85,  55,  50, 114, 105,  24, 131, 117,  85, 163,
    240, 240,  35, 240,  83, 148, 246, 165, 152, 239,   2, 240,
     90,   0,  48,  48,  86,  34,   0,  10,  19, 240, 240,  19,
    240, 240,  20, 240, 229, 240, 229, 240, 230, 240, 199, 240,
    199, 240, 200, 240, 169, 240, 162,  22, 240, 147,  23, 240,
    131,  38, 240, 130,  54, 240, 115,  55, 240,  99,  70, 240,
     98,  86, 240,  83,  87, 240,  67, 102, 240,  66, 118, 240,
     51, 119, 240,  35, 134, 240,  47,   2, 240,  31,   4, 243,
    166, 242, 182, 227, 183, 211, 198, 210, 214, 195, 215, 137,
    126,  73, 126,   0,  47,  32,  69,  30,   0,  11,  47,   5,
    175,   7, 198, 118, 182, 134, 166, 149, 166, 150, 150, 150,
    150, 150, 150, 150, 150, 150, 150, 149, 166, 134, 166, 133,
    182, 117, 207,   1, 239,   2, 214, 133, 182, 149, 166, 150,
    150, 166, 134, 166, 134, 166, 134, 166, 134, 166, 134, 166,
    134, 166, 134, 150, 150, 150, 150, 134, 111,   8, 127,   6,
      0,  42,  48,  78,  31,   0,  13,  23,  98, 220,  51, 182,
    104, 150, 166, 134, 197, 118, 228, 118, 228, 102, 240,  19,
     87, 240,  19,  86, 240,  35,  86, 240,  50,  71, 240,  50,
     71, 240, 151, 240, 151, 240, 151, 240, 151, 240, 151, 240,
    151, 240, 151, 240, 166, 240,  50,  87, 240,  34,  87, 240,
     34, 102, 240,  19, 103, 242, 134, 227, 150, 210, 182, 163,
    216,  84, 240,  30, 240,  88,   0,  44,  16,  69,  33,   0,
     12,  63,   5, 223,   7, 246, 119, 214, 150, 198, 166, 182,
    181, 182, 197, 166, 197, 166, 198, 150, 213, 150, 213, 150,
    214, 134, 214, 134, 214, 134, 214, 134, 214, 134, 214, 134,
    214, 134, 214, 134, 214, 134, 214, 134, 213, 150, 213, 150,
    198, 150, 197, 166, 181, 182, 181, 182, 165, 198, 134, 159,
      7, 191,   4,   0,  47,  16,  79,  29,   0,  10, 127,   8,
    111,   8, 166, 133, 166, 163, 166, 163, 166, 179, 150, 179,
    150, 194, 150, 194, 150,  82,  82, 150,  82,  82, 150,  82,
    240,  22,  67, 240,  22,  52, 240,  29, 240,  29, 240,  22,
     52, 240,  22,  67, 240,  22,  82, 240,  22,  82,  98, 134,
     82,  98, 134, 210, 134, 210, 134, 195, 134, 195, 134, 194,
    150, 179, 150, 164, 150, 134,  95,   9,  95,   9,   0,  40,
     64,  67,  28,   0,  10,  79,   8,  95,   8, 150, 118, 150,
    148, 150, 163, 150, 178, 150, 178, 150, 178, 150, 179, 134,
     82,  82, 134,  82,  82, 134,  82, 246,  82, 246,  67, 246,
     52, 253, 253, 246,  52, 246,  67, 246,  82, 246,  82, 246,
     82, 246, 240, 118, 240, 118, 240, 118, 240, 118, 240, 118,
    240, 118, 240,  63, 223,   0,  40,  16,  76,  34,   0,  14,
     39,  98, 240,  28,  51, 230, 104, 198, 166, 182, 197, 166,
    228, 166, 228, 150, 240,  19, 150, 240,  19, 135, 240,  19,
    134, 240,  50, 134, 240,  50, 119, 240, 199, 240, 199, 240,
    199, 240, 199, 240, 199, 240, 199, 240, 199, 143,  86, 143,
     86, 230, 135, 214, 150, 214, 150, 214, 166, 198, 182, 182,
    198, 151, 216,  88, 253,  51, 240,  56,  98,   0,  47,  80,
     69,  35,   0,  13,  30,  62,  78,  62, 134, 182, 198, 182,
    198, 182, 198, 182, 198, 182, 198, 182, 198, 182, 198, 182,
    198, 182, 198, 182, 198, 182, 198, 182, 207,   8, 207,   8,
    198, 182, 198, 182, 198, 182, 198, 182, 198, 182, 198, 182,
    198, 182, 198, 182, 198, 182, 198, 182, 198, 182, 198, 182,
    198, 182, 142,  62,  78,  62,   0,  48,  80,  38,  18,   0,
      6, 110,  78, 134, 198, 198, 198, 198, 198, 198, 198, 198,
    198, 198, 198, 198, 198, 198, 198, 198, 198, 198, 198, 198,
    198, 198, 198, 198, 198, 198, 142,  78,   0,  25,  32,  64,
     24,   0,   9, 110, 174, 246, 240,  54, 240,  54, 240,  54,
    240,  54, 240,  54, 240,  54, 240,  54, 240,  54, 240,  54,
    240,  54, 240,  54, 240,  54, 240,  54, 240,  54, 240,  54,
    240,  54, 240,  54, 240,  54, 240,  54, 147, 102, 134,  70,
    119,  70, 119,  70, 119,  70, 133,  70, 148,  70, 188, 232,
      0,  34,  64,  85,  35,   0,  13,  30, 106,  94, 106, 150,
    211, 214, 195, 230, 179, 246, 163, 240,  22, 147, 240,  38,
    131, 240,  54, 115, 240,  70,  99, 240,  86,  83, 240, 102,
     67, 240, 118,  52, 240, 118,  38, 240, 102,  24, 240,  95,
    240,  88,  23, 240,  71,  55, 240,  55,  70, 240,  54,  87,
    240,  38, 102, 240,  38, 103, 240,  22, 119, 246, 134, 246,
    135, 230, 150, 230, 151, 214, 167, 198, 182, 142,  77,  78,
     77,   0,  48,  80,  68,  27,   0,  10,  31, 207, 240,  22,
    240, 102, 240, 102, 240, 102, 240, 102, 240, 102, 240, 102,
    240, 102, 240, 102, 240, 102, 240, 102, 240, 102, 240, 102,
    240, 102, 240, 102, 240, 102, 240, 102, 240, 102, 178, 134,
    162, 150, 162, 150, 162, 150, 162, 150, 147, 150, 147, 150,
    132, 150, 117, 150, 102,  95,   6, 111,   6,   0,  37, 112,
    120,  43,   0,  16,  26, 240,  59,  75, 240,  43, 135, 240,
     24, 199, 240,  17,  22, 194,  21, 241,  22, 194,  21, 226,
     22, 194,  22, 209,  38, 194,  37, 194,  38, 194,  37, 194,
     38, 194,  53, 177,  54, 194,  53, 162,  54, 194,  54, 145,
     70, 194,  69, 130,  70, 194,  69, 130,  70, 194,  70, 113,
     86, 194,  85,  98,  86, 194,  85,  98,  86, 194,  86,  81,
    102, 194, 101,  66, 102, 194, 102,  49, 118, 194, 117,  34,
    118, 194, 117,  34, 118, 194, 118,  17, 134, 194, 135, 134,
    194, 135, 134, 194, 134, 150, 194, 149, 150, 194, 149, 150,
    194, 163, 166, 138,  99, 110,  74,  98, 126,   0,  59,  80,
     87,  35,   0,  13,  26, 186,  75, 170, 136, 210, 200, 210,
    201, 194, 194,  23, 178, 194,  39, 162, 194,  39, 162, 194,
     55, 146, 194,  71, 130, 194,  71, 130, 194,  87, 114, 194,
    103,  98, 194, 119,  82, 194, 119,  82, 194, 135,  66, 194,
    151,  50, 194, 167,  34, 194, 167,  34, 194, 183,  18, 194,
    201, 194, 201, 194, 216, 194, 231, 194, 246, 194, 246, 194,
    240,  21, 194, 240,  36, 194, 240,  36, 138, 227, 138, 242,
      0,  49,  16,  71,  33,   0,   9,  88, 240, 125, 240,  54,
     86, 245, 149, 213, 181, 182, 182, 150, 214, 134, 214, 119,
    215, 102, 246, 102, 246, 102, 247,  71, 247,  71, 247,  71,
    247,  71, 247,  71, 247,  71, 247,  71, 247,  71, 247,  71,
    247,  86, 246, 103, 230, 103, 215, 118, 214, 134, 214, 150,
    182, 182, 150, 214, 118, 246,  86, 240,  61, 240, 120,   0,
     47,  32,  67,  30,   0,  11,  47,   4, 191,   7, 198, 118,
    182, 134, 166, 150, 150, 150, 150, 151, 134, 151, 134, 151,
    134, 151, 134, 151, 134, 150, 150, 150, 150, 134, 166, 118,
    191,   3, 207, 246, 240, 150, 240, 150, 240, 150, 240, 150,
    240, 150, 240, 150, 240, 150, 240, 150, 240, 150, 240, 150,
    240, 150, 240,  94, 240,  30,   0,  43,  32, 110,  32,   0,
      9,  56, 240, 109, 240,  53,  86, 229, 149, 197, 181, 165,
    197, 165, 213, 133, 229, 133, 230, 102, 245, 101, 240,  21,
    101, 240,  22,  70, 240,  22,  70, 240,  22,  70, 240,  22,
     70, 240,  22,  70, 240,  22,  70, 240,  22,  70, 240,  22,
     70, 240,  22,  70, 240,  22,  85, 240,  22,  85, 240,  21,
    102, 245, 117, 230, 118,  84,  69, 149,  70,  52, 181,  35,
     50,  21, 197,  18,  86, 232,  69, 240,  45, 240, 122,  97,
    240, 116,  81, 240, 131,  66, 240, 137, 240, 137, 240, 137,
    240, 136, 240, 167, 240, 166, 240, 196,   0,   8, 112,  81,
     35,   0,  13,  31,   4, 240,  31,   7, 240,  38, 118, 240,
     22, 134, 246, 150, 230, 151, 214, 151, 214, 151, 214, 151,
    214, 151, 214, 150, 230, 150, 230, 134, 246, 118, 240,  31,
      2, 240,  63,   1, 240,  70, 101, 240,  54, 117, 240,  38,
    118, 240,  22, 134, 246, 134, 246, 134, 246, 134, 246, 134,
    246, 134, 246, 135, 230, 135,  66, 134, 135,  66, 134, 151,
     35,  78, 106,  94, 150,   0,  48, 112,  67,  25,   0,   7,
      7,  82, 155,  35, 132,  88, 116, 134, 100, 165, 100, 180,
     85, 180,  85, 195,  85, 195,  86, 179,  87, 163,  89, 240,
     44, 223, 191,   1, 159,   2, 159,   1, 191, 220, 240,  56,
    240,  55,  66, 214,  66, 229,  67, 213,  67, 213,  67, 213,
     68, 196,  85, 165,  86, 148, 104, 100, 115,  44, 130, 103,
      0,  35,  80,  75,  31,   0,  15,  95,  11,  95,  11,  85,
     86,  85,  83, 118, 115,  83, 118, 115,  82, 134, 130,  82,
    134, 130,  82, 134, 130,  82, 134, 130,  67, 134, 130, 246,
    240, 166, 240, 166, 240, 166, 240, 166, 240, 166, 240, 166,
    240, 166, 240, 166, 240, 166, 240, 166, 240, 166, 240, 166,
    240, 166, 240, 166, 240, 166, 240, 166, 240, 166, 240,  79,
      3, 223,   3,   0,  43,  80,  71,  34,   0,  12, 110, 106,
     78, 106, 134, 226, 198, 226, 198, 226, 198, 226, 198, 226,
    198, 226, 198, 226, 198, 226, 198, 226, 198, 226, 198, 226,
    198, 226, 198, 226, 198, 226, 198, 226, 198, 226, 198, 226,
    198, 226, 198, 226, 198, 226, 198, 226, 198, 226, 213, 210,
    230, 194, 245, 178, 240,  37, 147, 240,  54,  84, 240,  92,
    240, 167,   0,  48,  80,  84,  35,   0,  13,  30, 137,  78,
    137, 134, 243, 183, 226, 199, 211, 214, 210, 231, 179, 246,
    179, 246, 178, 240,  23, 147, 240,  38, 147, 240,  39, 130,
    240,  55, 115, 240,  70, 114, 240,  87,  98, 240, 102,  83,
    240, 102,  82, 240, 119,  51, 240, 134,  51, 240, 135,  34,
    240, 151,  19, 240, 166,  18, 240, 185, 240, 200, 240, 199,
    240, 215, 240, 230, 240, 229, 240, 245, 240, 240,  19, 240,
    240,  35,   0,  50,  48, 119,  47,   0,  17,  93,  46,  89,
     77,  46,  89, 119, 150, 210, 182, 151, 179, 182, 166, 178,
    199, 150, 178, 214, 151, 147, 214, 166, 146, 231, 135, 146,
    246, 136, 130, 246, 136, 114, 240,  23,  98,  22, 114, 240,
     38,  98,  23,  98, 240,  38,  98,  38,  82, 240,  55,  66,
     54,  82, 240,  70,  66,  55,  66, 240,  70,  66,  70,  50,
    240,  87,  34,  86,  50, 240, 102,  34,  87,  34, 240, 102,
     34, 102,  18, 240, 121, 118,  18, 240, 136, 121, 240, 136,
    135, 240, 152, 135, 240, 166, 151, 240, 166, 165, 240, 182,
    165, 240, 196, 181, 240, 196, 195, 240, 212, 195, 240, 226,
    211,   0,  66,  80,  84,  35,   0,  13,  46,  59, 126,  59,
    183, 147, 240,  23, 147, 240,  39, 115, 240,  70, 114, 240,
     87,  83, 240, 103,  51, 240, 119,  50, 240, 151,  19, 240,
    169, 240, 185, 240, 199, 240, 215, 240, 231, 240, 230, 240,
    231, 240, 201, 240, 170, 240, 163,  23, 240, 131,  39, 240,
    130,  71, 240,  99,  86, 240,  83, 103, 240,  66, 135, 240,
     35, 135, 240,  19, 167, 243, 182, 227, 199, 140,  94,  76,
     94,   0,  48,  80,  78,  36,   0,  13,  78, 138,  78, 138,
    135, 227, 215, 210, 231, 195, 247, 178, 240,  23, 163, 240,
     39, 131, 240,  55, 131, 240,  71,  99, 240,  87,  98, 240,
    119,  67, 240, 135,  50, 240, 151,  35, 240, 167,  18, 240,
    186, 240, 200, 240, 216, 240, 230, 240, 246, 240, 246, 240,
    246, 240, 246, 240, 246, 240, 246, 240, 246, 240, 246, 240,
    246, 240, 246, 240, 190, 240, 126,   0,  51,  16,  70,  26,
      0,   9, 127,   6,  95,   6,  86, 134, 101, 135, 100, 150,
    115, 151, 114, 151, 130, 151, 130, 135, 146, 135, 146, 119,
    240,  71, 240,  55, 240,  70, 240,  71, 240,  70, 240,  71,
    240,  55, 240,  71, 114, 151, 130, 151, 130, 135, 146, 134,
    162, 119, 162, 118, 163, 103, 163, 102, 164,  87, 149,  86,
    135,  79,   7,  79,   6,   0,  36,  48,  48,  11,   7,  71,
     71,  67, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
    131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
    131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
    131, 131, 131, 131, 135,  71,  71,  64,  36,  22,   0,   8,
     98, 146, 130, 146, 130, 146, 145, 161, 146, 146, 145, 161,
    146, 146, 146, 146, 150,  86,  87,  71,  71,  71,  71,  71,
     86,  86,  85, 101, 115, 131,   0,  75,  48,  11,   7,  71,
     71, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
    131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
    131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131,
    131, 131, 131, 131,  71,  71,  71,  64,  19,  16, 240, 240,
    129, 227, 197, 167, 132,  20,  99,  68,  67,  99,  81, 129,
      0,  70,  80,  14,  11, 240, 240,  83, 117,  87,  71,  71,
     85, 115,   0,  48, 112,  22,  11, 240, 240, 114, 130, 130,
    145, 146, 145, 146, 146, 150,  87,  71,  71,  86,  85, 115,
      0,  37, 112,  47,  24,   0,  39,  87, 251, 196,  69, 165,
     85, 150,  85, 133, 101, 148, 101, 240,  69, 240,  69, 234,
    181,  53, 149,  85, 133, 101, 117, 117, 117, 117, 117, 117,
    117, 117, 118,  86, 133,  66,  23, 105,  39, 134,  70,   0,
     33,  64,  70,  26,   0,   9, 104, 240,  56, 240, 101, 240,
    101, 240, 101, 240, 101, 240, 101, 240, 101, 240, 101, 240,
    101, 240, 101, 240, 101,  38, 213,  25, 183,  69, 166, 101,
    149, 118, 133, 133, 133, 134, 117, 134, 117, 134, 117, 134,
    117, 134, 117, 134, 117, 134, 117, 134, 117, 133, 133, 118,
    134, 101, 148,  18,  69, 163,  42, 179,  69,   0,  37,  16,
     39,  21,   0,  35,   7, 188, 133,  69, 101,  70, 101,  70,
     85,  86,  85, 100,  86, 246, 246, 246, 246, 246, 246, 240,
     21, 240,  22, 130,  86, 130, 102,  99, 118,  67, 155, 199,
      0,  29, 112,  68,  27,   0,  11,  88, 240,  72, 240, 117,
    240, 117, 240, 117, 240, 117, 240, 117, 240, 117, 240, 117,
    240, 117, 240, 117, 230,  37, 201,  21, 166,  71, 149, 118,
    149, 133, 133, 149, 133, 149, 118, 149, 118, 149, 118, 149,
    118, 149, 118, 149, 118, 149, 118, 149, 133, 149, 134, 133,
    149, 118, 165,  75, 138,  24, 166,  56,   0,  37,  80,  45,
     23,   0,  38,  38, 250, 181,  69, 133, 100, 133, 101, 101,
    117, 101, 133,  70, 133,  70, 133,  70, 133,  79,   4,  70,
    240,  38, 240,  38, 240,  53, 240,  53, 178, 101, 147, 101,
    131, 134,  68, 187, 231,   0,  32,  96,  62,  21,   0,   6,
     38, 218, 165,  37, 133,  38, 132,  54, 117,  54, 117,  68,
    133, 240,  21, 240,  21, 240,  21, 240,  21, 220, 156, 197,
    240,  21, 240,  21, 240,  21, 240,  21, 240,  21, 240,  21,
    240,  21, 240,  21, 240,  21, 240,  21, 240,  21, 240,  21,
    240,  21, 240,  21, 240,  21, 220, 156,   0,  30,  66,  25,
      0,  41,  54,  68, 154,  21, 132,  69,  20, 100, 100,  20,
     85, 101,  18, 101, 101, 149, 101, 149, 101, 149, 101, 149,
    101, 164, 100, 196,  68, 219, 210,  38, 242, 240, 130, 240,
    115, 240, 116, 240, 125, 207,   1, 175,   1, 143,   3, 100,
    165,  84, 196,  84, 196,  84, 196, 100, 165, 102, 117, 158,
    218,   0,   7,  64,  70,  27,   0,  10,  24, 240,  72, 240,
    117, 240, 117, 240, 117, 240, 117, 240, 117, 240, 117, 240,
    117, 240, 117, 240, 117, 240, 117,  69, 213,  41, 181,  18,
     53, 183,  85, 166, 101, 166, 101, 165, 117, 165, 117, 165,
    117, 165, 117, 165, 117, 165, 117, 165, 117, 165, 117, 165,
    117, 165, 117, 165, 117, 165, 117, 123,  27,  75,  27,   0,
     37,  80,  36,  14, 240, 240, 244, 149, 150, 119, 119, 133,
    163,   0,   8,   8, 104, 149, 149, 149, 149, 149, 149, 149,
    149, 149, 149, 149, 149, 149, 149, 149, 149, 106,  74,   0,
     19,  96,  50,  18,   0,   7, 115, 229, 199, 183, 183, 197,
    227,   0,  10,  72, 168, 213, 213, 213, 213, 213, 213, 213,
    213, 213, 213, 213, 213, 213, 213, 213, 213, 213, 213, 213,
    213,  84,  69,  70,  53,  70,  52,  86,  37, 100,  52, 122,
    166, 240, 240, 240,  69,  26,   0,   9, 104, 240,  56, 240,
    101, 240, 101, 240, 101, 240, 101, 240, 101, 240, 101, 240,
    101, 240, 101, 240, 101, 240, 101,  88, 133,  88, 133, 100,
    181,  99, 197,  83, 213,  51, 245,  35, 240,  21,  20, 240,
     26, 240,  27, 252, 229,  37, 229,  53, 213,  54, 197,  69,
    197,  85, 181,  86, 165, 101, 123,  26,  75,  26,   0,  36,
     32,  38,  15, 240, 240, 248, 120, 165, 165, 165, 165, 165,
    165, 165, 165, 165, 165, 165, 165, 165, 165, 165, 165, 165,
    165, 165, 165, 165, 165, 165, 165, 165, 165, 165, 123,  75,
      0,  21,  16,  69,  39,   0,  68,  40,  69, 117, 168,  41,
     57, 136,  18,  53,  34,  53, 183,  87,  85, 166, 102, 101,
    166, 102, 101, 165, 117, 117, 165, 117, 117, 165, 117, 117,
    165, 117, 117, 165, 117, 117, 165, 117, 117, 165, 117, 117,
    165, 117, 117, 165, 117, 117, 165, 117, 117, 165, 117, 117,
    165, 117, 117, 123,  27,  27,  75,  27,  27,   0,  54,  16,
     48,  27,   0,  47,  40,  69, 168,  41, 136,  18,  53, 183,
     85, 166, 101, 166, 101, 165, 117, 165, 117, 165, 117, 165,
    117, 165, 117, 165, 117, 165, 117, 165, 117, 165, 117, 165,
    117, 165, 117, 165, 117, 123,  27,  75,  27,   0,  37,  80,
     46,  24,   0,  39, 118, 240,  27, 181,  69, 149, 101, 132,
    132, 117, 133, 101, 133,  86, 134,  70, 134,  70, 134,  70,
    134,  70, 134,  70, 134,  70, 134,  85, 133, 101, 133, 102,
    117, 117, 101, 149,  69, 188, 231,   0,  34,  48,  62,  26,
      0,  45,  72,  38, 168,  25, 138,  69, 166, 101, 149, 118,
    133, 118, 133, 134, 117, 134, 117, 134, 117, 134, 117, 134,
    117, 134, 117, 134, 117, 133, 133, 118, 133, 118, 134,  86,
    151,  54, 175, 181,  37, 229, 240, 101, 240, 101, 240, 101,
    240, 101, 240, 101, 240, 101, 240,  59, 251,   0,   8,  48,
     66,  27,   0,  48,  22,  82, 186,  51, 166,  51,  20, 150,
    102, 134, 118, 134, 133, 133, 149, 118, 149, 118, 149, 118,
    149, 118, 149, 118, 149, 118, 149, 133, 149, 134, 133, 134,
    118, 150, 102, 166,  56, 186,  21, 214,  53, 240, 117, 240,
    117, 240, 117, 240, 117, 240, 117, 240, 117, 240, 117, 240,
     75, 240,  27,   0,   7,  32,  36,  20,   0,  35,   7,  52,
    103,  38,  87,  18,  21, 116,  17,  37, 118,  37, 118,  37,
    117,  81, 149, 245, 245, 245, 245, 245, 245, 245, 245, 245,
    245, 203, 155,   0,  28,  80,  38,  19,   0,  33, 106, 114,
    100,  98, 131,  83, 146,  83, 146,  84, 247, 218, 156, 140,
    154, 230,  66, 148,  66, 163,  67, 147,  67, 147,  68, 130,
     85,  84,  93,  98,  54,   0,  27,  16,  45,  18,   0,  12,
      2, 240,  18, 240,  18, 240,  18, 243, 243, 228, 228, 213,
    173,  93, 133, 213, 213, 213, 213, 213, 213, 213, 213, 213,
    213,  66, 117,  66, 117,  66, 117,  66, 117,  66, 133,  34,
    168, 181,   0,  25,  80,  47,  27,   0,  47,  40,  72, 120,
     72, 165, 117, 165, 117, 165, 117, 165, 117, 165, 117, 165,
    117, 165, 117, 165, 117, 165, 117, 165, 117, 165, 117, 165,
    117, 165, 117, 165, 102, 165, 102, 181,  74, 153,  24, 167,
     40,   0,  37,  80,  47,  25,   0,  43, 106,  71,  74,  71,
    117, 130, 165, 130, 181,  99, 181,  98, 198,  82, 213,  66,
    229,  66, 245,  35, 245,  34, 240,  21,  34, 240,  40, 240,
     39, 240,  55, 240,  69, 240,  85, 240, 100, 240,  99, 240,
    115,   0,  36,  71,  34,   0,  59,  73,  41,  40,  73,  41,
     40, 117,  84, 130, 165,  84, 130, 165, 100,  98, 197,  84,
     98, 197,  70,  82, 197,  70,  66, 229,  54,  66, 229,  34,
     21,  35, 229,  34,  36,  34, 240,  21,  18,  36,  34, 240,
     23,  56, 240,  23,  70, 240,  54,  70, 240,  53,  86, 240,
     53, 100, 240,  84, 100, 240,  83, 116, 240,  98, 130,   0,
     48,  48,  48,  25,   0,  43, 106,  41,  74,  41, 117,  99,
    197,  82, 229,  50, 245,  35, 240,  24, 240,  54, 240,  70,
    240,  85, 240, 101, 240,  70, 240,  56, 240,  34,  37, 242,
     53, 227,  69, 195, 101, 178, 117, 120,  73,  72,  73,   0,
     34, 112,  66,  25,   0,  43, 106,  71,  74,  71, 117, 130,
    166, 114, 181,  99, 181,  98, 213,  82, 213,  66, 229,  66,
    245,  50, 245,  34, 240,  22,  18, 240,  40, 240,  39, 240,
     70, 240,  69, 240,  85, 240, 100, 240,  99, 240, 130, 240,
    115, 240, 114, 243,  82, 229,  50, 245,  50, 245,  35, 244,
     35, 240,  39, 240,  68,   0,   8,  80,  40,  20,   0,  35,
     31,  95,  84,  85,  99,  86,  98, 101, 114,  86, 114,  85,
    130,  69, 230, 229, 229, 230,  66, 133,  82, 117,  98, 102,
     98, 101,  99,  86,  99,  85,  85,  79,  95,   0,  28,  16,
     11,  26,   0,  65,  15,   7,  79,   7,   0,  75,  32,  15,
     48,   0, 120,  15,  15,  14,  79,  15,  14,   0, 127,   0,
     11,  64,  25,  18, 240, 240, 131,  83, 101,  53,  85,  53,
     85,  53,  84,  68,  85,  53,  84,  68,  99,  83, 129, 113,
      0,  77,  64,  14,  19, 240, 240, 180,  97, 125,  93,  93,
    113, 100,   0,  91,  16,
};

//*****************************************************************************
//
// The font definition for the 44 point Cm bold font.
//
//*****************************************************************************
const tFont g_sFontCm44b =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    43,

    //
    // The height of the font.
    //
    45,

    //
    // The baseline of the font.
    //
    34,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   42,   83,  207,  293,  414,  507,
         531,  579,  627,  674,  740,  762,  773,  787,
         880,  943,  981, 1044, 1106, 1169, 1227, 1290,
        1361, 1419, 1482, 1505, 1536, 1572, 1593, 1648,
        1705, 1816, 1902, 1971, 2049, 2118, 2197, 2264,
        2340, 2409, 2447, 2511, 2596, 2664, 2784, 2871,
        2942, 3009, 3119, 3200, 3267, 3342, 3413, 3497,
        3616, 3700, 3778, 3848, 3896, 3932, 3980, 3999,
        4013, 4035, 4082, 4152, 4191, 4259, 4304, 4366,
        4432, 4502, 4538, 4588, 4657, 4695, 4764, 4812,
        4858, 4920, 4986, 5022, 5060, 5105, 5152, 5199,
        5270, 5318, 5384, 5424, 5435, 5450, 5475,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm44bData
};
