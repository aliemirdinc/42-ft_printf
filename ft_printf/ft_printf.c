#include <stdio.h>
#include <stdarg.h>

int ft_printf(char *str, ...)
{
    va_list list;
    va_start(list, str);
    char *line;


    line = va_arg(list, char *) ;
	printf("ÇIKTI: %s\n", str);

    va_end(list);
    return 0;
}

int main(int ac, char **av)
{
    ft_printf(*av);
    return 0;
}
