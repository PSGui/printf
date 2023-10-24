#include "ft_printf.h"

void	ft_nbr(int n, int *contagem)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
			*contagem += 1;
		}
		if (n >= 10)
		{
			ft_nbr((n / 10), contagem);
		}
		ft_char(n % 10 + '0', contagem);
	}
}