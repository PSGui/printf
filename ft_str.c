#include "ft_printf.h"

void	ft_str(char *s, int *contagem)
{
	int	i;

	i = 0;
	if (s != 0)
	{
		while(str[i] != '\0')
		{
			write(1, s[i], 1);
			i++;
			*contagem += 1;
		}
	}
	else
		*contagem += write(1, "(null)", 6);
}