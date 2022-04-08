/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:22:47 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/08 08:57:53 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	int		n_char;

	va_start(arg, str);
	n_char = 0;
	while (*str)
	{
		if (*str == '%')
		{
			if (ft_check_arg(arg, str, &n_char))
				str++;
		}
		else
			n_char += ft_putchar(*str);
		str++;
	}
	va_end(arg);
	return (n_char);
}

int	ft_check_arg(va_list arg, const char *str, int *n_char)
{
	if (*(str + 1) == 'c')
		*n_char += ft_putchar(va_arg(arg, int));
	else if (*(str + 1) == 's')
		ft_putstr(va_arg(arg, char *), n_char);
	else if (*(str + 1) == 'p')
	{
		ft_putstr("0x", n_char);
		ft_putpnbr_base(va_arg(arg, long int), "0123456789abcdef", n_char);
	}
	else if (*(str + 1) == 'd' || *(str + 1) == 'i')
		ft_putnbr_base(va_arg(arg, int), "0123456789", n_char);
	else if (*(str + 1) == 'u')
		ft_putunbr(va_arg(arg, int), "0123456789", 10, n_char);
	else if (*(str + 1) == 'x')
		ft_putunbr(va_arg(arg, int), "0123456789abcdef", 16, n_char);
	else if (*(str + 1) == 'X')
		ft_putunbr(va_arg(arg, int), "0123456789ABCDEF", 16, n_char);
	else if (*(str + 1) == '%')
		*n_char += ft_putchar(37);
	else
		return (0);
	return (1);
}
