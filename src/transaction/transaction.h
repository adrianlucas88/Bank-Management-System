/* In C language, header files contain a set of predefined standard library functions. The .h is the extension of the header files in C and we request to use a header file in our program by including it with the C preprocessing directive “#include”.

C Header files offer the features like library functions, data types, macros, etc by importing them into the program with the help of a preprocessor directive “#include”.

Syntax of Header Files in C
We can include header files in C by using one of the given two syntax whether it is a pre-defined or user-defined header file.

#include <filename.h>    // for files in system/default directory
       or
#include "filename.h"    // for files in same directory as source file
The “#include” preprocessor directs the compiler that the header file needs to be processed before compilation and includes all the necessary data types and function definitions. */
#ifndef TRANSACTION_H
#define TRANSACTION_H
#include "deposit.c"
#include "withdrawal.c"

void deposit();
void withdrawal();

#endif // TRANSACTION_H
