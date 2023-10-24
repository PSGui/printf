#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>

int     ft_printf(const char *str, ...);
void    ft_formatspecifier(char specifier, va_list args, int *contagem);
void	ft_char(char c, int *contagem);
void	ft_hexa(unsigned int nbr, char uplow, int *contagem);
void    ft_nbr(int n, int *contagem);
void    ft_str(char *s, int *contagem);

#endif