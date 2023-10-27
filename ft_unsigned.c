/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:54:20 by gsaladri          #+#    #+#             */
/*   Updated: 2023/10/24 21:54:21 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
