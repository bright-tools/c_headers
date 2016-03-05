/*

signal.h

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

#if !defined __SIGNAL_H
#define      __SIGNAL_H

typedef int sig_atomic_t;
#define SIG_DFL 1
#define SIG_ERR 2
#define SIG_IGN 3
#define SIGABRT 4
#define SIGFPE  5
#define SIGILL  6
#define SIGINT  7
#define SIGSEGV 8
#define SIGTERM 9
void (*signal(int sig, void (*func)(int)))(int);
int raise(int sig);

#endif
