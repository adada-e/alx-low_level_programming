0x14. C Bit manipulation Task 00

Low-level programming & Algorithm
Home Page

0x00. C - Hello, World
0x01. C - Variables, if, else, while
0x02. C - Functions, nested loops
0x03. C - Debugging
0x04. C - More functions, more nested loops
0x05. C - Pointers, arrays and strings
0x06. C - More pointers, arrays and strings
0x07. C - Even more pointers, arrays and strings
0x08. C - Recursion
0x09. C - Static libraries
0x10. C - Variadic functions
0x11. C - printf
0x12. C - Singly linked lists
0x13. C - More singly linked lists
0x14. C - Bit manipulation
0x15. C - File I/O
0x16. C - Simple Shell
0x0A. C - argc, argv
0x0B. C - malloc, free
0x0C. C - More malloc, free
0x0D. C - Preprocessor
0x0E. C - Structures, typedef
0x0F. C - Function pointers

Write a function that converts a binary number to an unsigned int.

Prototype: unsigned int binary_to_uint(const char *b);
where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL
julien@ubuntu:~/0x14. Binary$ cat 0-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x14. Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
julien@ubuntu:~/0x14. Binary$ ./a 
1
5
0
98
402
julien@ubuntu:~/0x14. Binary$ 
Repo:
GitHub repository: holbertonschool-low_level_programming
Directory: 0x14-bit_manipulation
File: 0-binary_to_uint.c
