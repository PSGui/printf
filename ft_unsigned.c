#include "ft_printf.h"

void	ft_unsigned(unsigned int n, int *contagem)
{
	if (n > 4294967295)
		return ;
	if (n >= 10)
	{
		ft_nbr((n / 10), contagem);
	}
	ft_char(n % 10 + '0', contagem);
}
