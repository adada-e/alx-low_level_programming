0x09-static_libraries

Concepts 
C static Libraries.
* What is a C library, whar is it good for, hoe to create c library using the ar and ranlib commands. 

* Using a c library ib a program 

* Difference between a static and dynamic library. Dynamic is also called shared library.

What is a Library? A library is a file containing several object files that can be used as a single entity in a linking phase of a program. When programs get large, compiling and linking times also comes to a large figure. This pollutes the makefile. 
The library is indexted, this allowws for finding symbolys easily 

Static libraries- These are just a collection of object files that are linked into the program during the linking phase of compilation, they are not relevant during runtime.

Shared libraries -

0. A library is not a luxury but one of the necessities of life
    Creat the static library libmy.a containing the functions listed below 
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
   Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
