/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:22:47 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/07 16:11:38 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	ft_printf(char const *str, ...)
{
	va_list	argptr;
	int		n_char;

	va_start(argptr, str);
	n_char = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1) == 'c')
		{
			n_char += ft_putchar(va_arg(argptr, int));
			str++;
		}
		else if (*str == '%' && *(str + 1) == 's')
		{
			ft_putstr(va_arg(argptr, char *), &n_char);
			str++;
		}
		else if (*str == '%' && (*(str + 1) == 'd' || *(str + 1) == 'i'))
		{
			ft_putnbr(va_arg(argptr, int), &n_char);
			str++;
		}
		else if (*str == '%' && *(str + 1) == 'u')
		{
			ft_putunbr(va_arg(argptr, int), &n_char);
			str++;
		}
		else if (*str == 37 && *(str + 1) == 'x')
		{
			ft_putxnbr(va_arg(argptr, int), "0123456789abcdef", &n_char);
			str++;
		}
		else if (*str == '%' && *(str + 1) == 'X')
		{
			ft_putxnbr(va_arg(argptr, int), "0123456789ABCDEF", &n_char);
			str++;
		}
		else if (*str == 37 && *(str + 1) == '%')
		{
			n_char += ft_putchar(37);
			str++;
		}
		else
			n_char += ft_putchar(*str);
		str++;
	}
	va_end(argptr);
	return (n_char);
}
