/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:25:58 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/07 15:54:07 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(int nbr, int *n_char)
{
	unsigned int	n;

	n = 0;
	if (nbr > -1)
	{
		ft_putnbr(nbr, n_char);
		return ;
	}
	n = 4294967296 + nbr;
	if (n / 10)
		ft_putnbr(n / 10, n_char);
	*n_char += ft_putchar(n % 10 + 48);
}
