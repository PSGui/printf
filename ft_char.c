#include "ft_printf.h"

void	ft_char(char c, int *contagem)
{
        int     *contagem;

	write(1, &c, 1);
        *contagem += 1;
}