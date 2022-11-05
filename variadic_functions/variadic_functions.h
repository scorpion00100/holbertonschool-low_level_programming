#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct db - struct
 * @let: letter of data type
 * @func: function ptr
 */
typedef struct db
{
	char let;
	void (*func)(void va_list);
} data;

#endif
