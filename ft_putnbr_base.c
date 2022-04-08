/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:22:47 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/08 07:17:39 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base, int *n_char)
{
	int		l_base;

	l_base = ft_strlen(base);
	if (nbr < 0)
	{
		if (l_base == 10)
			*n_char += ft_putchar('-');
		if (nbr / l_base != 0)
			ft_putnbr_base(((unsigned int)nbr * -1) / l_base, base, n_char);
		*n_char += ft_putchar(base[((unsigned int)nbr * -1) % l_base]);
	}
	else
	{
		if (nbr / l_base > 0)
			ft_putnbr_base((unsigned int)nbr / l_base, base, n_char);
		*n_char += ft_putchar(base[nbr % l_base]);
	}
}
