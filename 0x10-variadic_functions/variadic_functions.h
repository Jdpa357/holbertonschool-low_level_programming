#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

typedef struct args_t
{
  char *format;
  void (*function)(va_list);
} args_t;

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const, ...);

#endif /* VARIADIC_FUNCTIONS_H */
