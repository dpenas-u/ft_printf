/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:22:47 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/07 12:23:06 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base)
{
	int		l_base;
	char	c;

	l_base = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr / l_base != 0)
			ft_putnbr_base(((unsigned int)nbr * -1) / l_base, base);
		c = base[((unsigned int)nbr * -1) % l_base];
	}
	else
	{
		if (nbr / l_base > 0)
			ft_putnbr_base((unsigned int)nbr / l_base, base);
		c = base[nbr % l_base];
	}
	ft_putchar(c);
}
