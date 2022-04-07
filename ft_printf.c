/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:22:47 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/07 13:57:42 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	ft_printf(char const *str, ...)
{
	va_list	argptr;
	int		i;

	va_start(argptr, str);
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%' && str[i + 1] == 'c')
		{
			ft_putchar(va_arg(argptr, int));
			i = i + 1;
		}
		else if (str[i] == '%' && str[i + 1] == 's')
		{
			ft_putstr(va_arg(argptr, char *));
			i = i + 1;
		}
		else if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i'))
		{
			ft_putnbr(va_arg(argptr, int));
			i = i + 1;
		}
		else if (str[i] == '%' && str[i + 1] == 'u')
		{
			ft_putunbr(va_arg(argptr, int));
			i = i + 1;
		}
		else if (str[i] == 37 && str[i + 1] == 'x')
		{
			ft_putnbr_base(va_arg(argptr, int), "0123456789abcdef");
			i = i + 1;
		}
		else if (str[i] == '%' && str[i + 1] == 'X')
		{
			ft_putnbr_base(va_arg(argptr, int), "0123456789ABCDEF");
			i = i + 1;
		}
		else if (str[i] == 37 && str[i + 1] == '%')
		{
			ft_putchar(37);
			i = i + 1;
		}
		else
			ft_putchar(str[i]);
	}
	return (i);
}
