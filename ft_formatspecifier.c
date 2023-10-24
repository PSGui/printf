#include "ft_printf.h"

void    ft_formatspecifier(const char *specifier, va_list args, int *contagem)
{
        if (*specifier == 'd' || *specifier == 'i')
                ft_nbr(va_arg(args, int), contagem);
        else if (*specifier == 'u')
                ft_nbr(va_arg(args, unsigned int), contagem);
        else if (*specifier == 'c')
                char_printf(va_arg(args, char), contagem);
        else if (*specifier == 's')
                ft_str(va_arg(args, char *), contagem);
        else if (*specifier == 'p')
                ft_str(va_arg(args, void *), contagem);
        else if (*specifier == 'x')
                ft_hexa(va_arg(args, int), 'x', contagem);
        else if (*specifier == 'x')
                ft_hexa(va_arg(args, int), 'X', contagem);
        else if (*specifier == '%')
                ft_char('%', contagem);
        else
                return (0);
}