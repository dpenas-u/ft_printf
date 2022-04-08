/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:56:23 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/08 07:30:07 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(int nbr, char *base, int fraction, int *n_char)
{
	unsigned int	n;

	n = 0;
	if (nbr > -1)
	{
		ft_putnbr_base(nbr, base, n_char);
		return ;
	}
	n = 4294967296 + nbr;
	if (n / fraction)
		ft_putnbr_base(n / fraction, base, n_char);
	ft_putnbr_base(n % fraction, base, n_char);
}
