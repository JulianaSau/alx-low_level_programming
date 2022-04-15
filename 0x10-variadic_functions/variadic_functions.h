#ifndef VAR_HFILE
#define VAR_HFILE
/*
 *filename: variadic_functions.h
 *Desc: contains prototypes of functions used in this project
 */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif
