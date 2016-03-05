/*

float.h

IMPORTANT NOTE:  This header is not intended to be functional.  It is intended
purely to be an ANSI-compliant header which can be used when performing static
analyis of code (i.e. compiler independent)


Copyright (c) 2016 John Bailey

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#if !defined __FLOAT_H
#define      __FLOAT_H

#define FLT_ROUNDS 1

#define DBL_DIG          10
#define DBL_MANT_DIG      1
#define DBL_MAX_10_EXP  +37
#define DBL_MAX_EXP       1
#define DBL_MIN_10_EXP  -37
#define DBL_MIN_EXP       1
#define FLT_DIG           6
#define FLT_MANT_DIG      1
#define FLT_MAX_10_EXP  +37
#define FLT_MAX_EXP       1
#define FLT_MIN_10_EXP  -37
#define FLT_MIN_EXP       1
#define FLT_RADIX         2
#define LDBL_DIG         10
#define LDBL_MANT_DIG     1
#define LDBL_MAX_10_EXP +37
#define LDBL_MAX_EXP      1
#define LDBL_MIN_10_EXP -37
#define LDBL_MIN_EXP      1

#define DBL_MAX  1E+37
#define FLT_MAX  1E+37
#define LDBL_MAX 1E+37

#define DBL_EPSILON  1E-9
#define DBL_MIN      1E-37
#define FLT_EPSILON  1E-5
#define FLT_MIN      1E-37
#define LDBL_EPSILON 1E-9
#define LDBL_MIN     1E-37

#endif
