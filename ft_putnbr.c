/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:20:16 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/07 12:22:35 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	if (!n)
		ft_putchar(n + 48);
	else if (n < 0)
	{
		ft_putchar(45);
		if (n / 10)
			ft_putnbr((n / 10) * -1);
		ft_putchar((n % 10) * -1 + 48);
	}
	else
	{
		if (n / 10)
			ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}
}
