/*

stdint.h

IMPORTANT NOTE:  This header is not intended to be functional.  It is intended
purely to be an ANSI-compliant header which can be used when performing static
analyis of code (i.e. compiler independent)


Copyright (c) 2015 John Bailey

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

#if !defined __STDINT_H
#define      __STDINT_H

typedef char  int8_t;
typedef short int16_t;
typedef int   int32_t;
typedef int   int64_t;
typedef unsigned char  uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int   uint32_t;
typedef unsigned long  uint64_t;

typedef char  int_least8_t;
typedef short int_least16_t;
typedef int   int_least32_t;
typedef int   int_least64_t;
typedef unsigned char  uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int   uint_least32_t;
typedef unsigned long  uint_least64_t;

typedef char  int_fast8_t;
typedef short int_fast16_t;
typedef int   int_fast32_t;
typedef int   int_fast64_t;
typedef unsigned char  uint_fast8_t;
typedef unsigned short uint_fast16_t;
typedef unsigned int   uint_fast32_t;
typedef unsigned long  uint_fast64_t;

typedef long intptr_t;
typedef unsigned long uintptr_t;
typedef long intmax_t;
typedef unsigned long uintmax_t;

/* TODO: Add qualifiers to these */

#define INT8_MIN  (-128)
#define INT16_MIN (-32767 -1)
#define INT32_MIN (-2147483647 - 1)
#define INT64_MIN (-9223372036854775807 - 1)

#define INT8_MAX  (127)
#define INT16_MAX (32767)
#define INT32_MAX (2147483647)
#define INT64_MAX (9223372036854775807)

#define UINT8_MAX  (256)
#define UINT16_MAX (65535)
#define UINT32_MAX (4294967295)
#define UINT64_MAX (18446744073709551615)

#if 0
/* TODO: Add defs for these */

INT_LEASTN_MIN
INT_LEASTN_MAX
UINT_LEASTN_MAX
INT_FASTN_MIN
INT_FASTN_MAX
UINT_FASTN_MAX
INTPTR_MIN
INTPTR_MAX
UINTPTR_MAX
INTMAX_MIN
INTMAX_MAX
UINTMAX_MAX
PTRDIFF_MIN
PTRDIFF_MAX
SIG_ATOMIC_MIN
SIG_ATOMIC_MAX
SIZE_MAX
WCHAR_MIN
WCHAR_MAX
WINT_MIN
WINT_MAX
INTN_C(value)
UINTN_C(value)
INTMAX_C(value)
UINTMAX_C(value)
#endif

#endif
