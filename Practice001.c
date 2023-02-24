/*We will be learning how to write and compile our first c program.
Endeavor to make sure you have your compiler installed already.
#include <stdio.h> This is considered the Header file that prints the standard input and output of a library function. The printf() and scanf() function is defined in the header file
int main() The main function is the entry point of every program in C language. The printf() is used to print data on the console.
return 0 The return 0 statement, returns execution status to the OS. The 0 value is used for successful execution and 1 for unsuccessful execution.
NB: I made this writings in the comment because it overlooked when compilin my code, we use comment to document our code and i used a multi line comment. More of this will be given in details as we progress
Lets try to print something.
*/
#include <stdio.h>

int main(){
    printf("Hello World");// prints Hello World

    return 0;
}