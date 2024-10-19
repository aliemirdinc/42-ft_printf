#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_check_type(const char type, va_list args);
int ft_put_c(char c);







#endif