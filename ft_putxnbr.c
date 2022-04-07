/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:56:23 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/07 16:11:31 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putxnbr(int nbr, char *base, int *n_char)
{
	unsigned int	n;

	n = 0;
	if (nbr > -1)
	{
		ft_putnbr_base(nbr, base, n_char);
		return ;
	}
	n = 4294967296 + nbr;
	if (n / 16)
		ft_putnbr_base(n / 16, base, n_char);
	ft_putnbr_base(n % 16, base, n_char);
}
