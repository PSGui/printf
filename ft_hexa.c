#include "ft_printf.h"

static void     ft_hexa_helper(unsigned int n, char uplow, int *contagem)
{
	char	*low;
	char	*upp;

	low = "0123456789abcdef";
	upp = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_hexa_helper(n / 16, uplow, contagem);
		n = n % 16;
	}
	if (uplow == 'X')
	{
		write(1, &upp[n], 1);
		*contagem += 1;
		return ;
	}
	write(1, &low[n], 1);
	*contagem += 1;
}

void	ft_hexa(unsigned int nbr, const char *uplow, int *contagem)
{
        int     nums_printed;

	if (nbr == 0)
	{
		write(1, "0", 1);
		*count += 1;
		return ;
	}
        dec_to_hexa(nbr, uplow, count);
}