/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 08:01:12 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/08 08:27:05 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpnbr_base(unsigned long int nbr, char *base, int *n_char)
{
	int	l_base;

	l_base = ft_strlen(base);
	if (nbr < 0)
	{
		if (nbr / l_base)
			ft_putpnbr_base((nbr * -1) / l_base, base, n_char);
		*n_char += ft_putchar(base[(nbr * -1) % l_base]);
	}
	else
	{
		if (nbr / l_base)
			ft_putpnbr_base(nbr / l_base, base, n_char);
		*n_char += ft_putchar(base[nbr % l_base]);
	}
}
