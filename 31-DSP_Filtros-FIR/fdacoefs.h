/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.6 and DSP System Toolbox 9.8.
 * Generated on: 08-Sep-2020 21:57:33
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 494
 * Stable            : Yes
 * Linear Phase      : Yes (Type 2)
 * Arithmetic        : fixed
 * Numerator         : s16,17 -> [-2.500000e-01 2.500000e-01)
 * Input             : s16,15 -> [-1 1)
 * Filter Internals  : Full Precision
 *   Output          : s35,32 -> [-4 4)  (auto determined)
 *   Product         : s31,32 -> [-2.500000e-01 2.500000e-01)  (auto determined)
 *   Accumulator     : s35,32 -> [-4 4)  (auto determined)
 *   Round Mode      : No rounding
 *   Overflow Mode   : No overflow
 */

/* General type conversion for MATLAB generated C-code  */
// #include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * /opt/MATLAB/R2019a/extern/include/tmwtypes.h 
 */
/*
 * Warning - Filter coefficients were truncated to fit specified data type.  
 *   The resulting response may not match generated theoretical response.
 *   Use the Filter Design & Analysis Tool to design accurate
 *   int16 filter coefficients.
 */
const int N = 494;
const int16_t fir_coeff[494] = {
      -21,    -21,    -18,    -11,     -4,      3,      7,      6,      1,
       -7,    -16,    -22,    -24,    -21,    -13,     -3,      7,     14,
       15,     10,      1,    -11,    -20,    -24,    -22,    -13,      0,
       13,     23,     27,     23,     13,     -1,    -13,    -21,    -20,
      -11,      4,     21,     36,     43,     41,     31,     15,     -2,
      -13,    -16,     -8,      9,     30,     49,     62,     63,     53,
       35,     14,     -3,    -10,     -4,     14,     39,     63,     81,
       87,     78,     58,     33,     11,     -2,      0,     17,     44,
       75,     99,    110,    105,     84,     54,     25,      5,      1,
       15,     45,     80,    112,    131,    130,    109,     75,     38,
        9,     -3,      7,     37,     77,    117,    144,    149,    131,
       94,     49,      9,    -14,    -11,     18,     62,    110,    147,
      161,    146,    107,     54,      2,    -33,    -40,    -16,     31,
       87,    135,    160,    152,    113,     53,    -12,    -62,    -82,
      -66,    -19,     45,    106,    144,    147,    110,     44,    -34,
     -101,   -138,   -133,    -89,    -18,     57,    112,    128,     98,
       28,    -64,   -150,   -207,   -218,   -179,   -103,    -13,     62,
       97,     78,      7,    -97,   -205,   -287,   -318,   -289,   -210,
     -104,     -6,     53,     51,    -16,   -130,   -262,   -373,   -431,
     -418,   -339,   -216,    -90,      1,     24,    -33,   -156,   -314,
     -460,   -553,   -564,   -489,   -350,   -189,    -57,      2,    -36,
     -164,   -350,   -540,   -680,   -726,   -662,   -506,   -303,   -116,
       -5,    -10,   -137,   -355,   -604,   -810,   -910,   -870,   -696,
     -438,   -171,     21,     71,    -45,   -304,   -636,   -946,  -1136,
    -1144,   -954,   -613,   -217,    114,    270,    188,   -131,   -607,
    -1109,  -1485,  -1606,  -1406,   -915,   -251,    399,    827,    866,
      443,   -389,  -1444,  -2434,  -3037,  -2964,  -2042,   -268,   2178,
     4952,   7609,   9697,  10844,  10844,   9697,   7609,   4952,   2178,
     -268,  -2042,  -2964,  -3037,  -2434,  -1444,   -389,    443,    866,
      827,    399,   -251,   -915,  -1406,  -1606,  -1485,  -1109,   -607,
     -131,    188,    270,    114,   -217,   -613,   -954,  -1144,  -1136,
     -946,   -636,   -304,    -45,     71,     21,   -171,   -438,   -696,
     -870,   -910,   -810,   -604,   -355,   -137,    -10,     -5,   -116,
     -303,   -506,   -662,   -726,   -680,   -540,   -350,   -164,    -36,
        2,    -57,   -189,   -350,   -489,   -564,   -553,   -460,   -314,
     -156,    -33,     24,      1,    -90,   -216,   -339,   -418,   -431,
     -373,   -262,   -130,    -16,     51,     53,     -6,   -104,   -210,
     -289,   -318,   -287,   -205,    -97,      7,     78,     97,     62,
      -13,   -103,   -179,   -218,   -207,   -150,    -64,     28,     98,
      128,    112,     57,    -18,    -89,   -133,   -138,   -101,    -34,
       44,    110,    147,    144,    106,     45,    -19,    -66,    -82,
      -62,    -12,     53,    113,    152,    160,    135,     87,     31,
      -16,    -40,    -33,      2,     54,    107,    146,    161,    147,
      110,     62,     18,    -11,    -14,      9,     49,     94,    131,
      149,    144,    117,     77,     37,      7,     -3,      9,     38,
       75,    109,    130,    131,    112,     80,     45,     15,      1,
        5,     25,     54,     84,    105,    110,     99,     75,     44,
       17,      0,     -2,     11,     33,     58,     78,     87,     81,
       63,     39,     14,     -4,    -10,     -3,     14,     35,     53,
       63,     62,     49,     30,      9,     -8,    -16,    -13,     -2,
       15,     31,     41,     43,     36,     21,      4,    -11,    -20,
      -21,    -13,     -1,     13,     23,     27,     23,     13,      0,
      -13,    -22,    -24,    -20,    -11,      1,     10,     15,     14,
        7,     -3,    -13,    -21,    -24,    -22,    -16,     -7,      1,
        6,      7,      3,     -4,    -11,    -18,    -21,    -21
};