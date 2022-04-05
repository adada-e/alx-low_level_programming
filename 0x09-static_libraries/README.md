0x09-static_libraries 

General

What is a static library, how does it work, how to create one, and how to use it
Basic usage of ar, ranlib, nm

Requirements

All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
All files are linted for syntax and style with Betty

0. A library is not a luxury but one of the necessities of life
	int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

1. Without libraries what have we? We have no past and no future

2. Either write something worth reading or do something worth writing
Write a blog post on C static libraries. It should cover:

Why use libraries
How they work
How to create them
How to use them

