/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaladri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:26:51 by gsaladri          #+#    #+#             */
/*   Updated: 2023/10/24 12:26:52 by gsaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_str(char *s, int *contagem)
{
	if (s == NULL)
	{
		write(1, "(null)", 6);
		*contagem += 6;
		return ;
	}
	while (*s)
	{
		ft_char(((char)*s), contagem);
		s++;
	}
}
