/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:19:43 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/07 15:42:29 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int	*n_char)
{
	if (!s)
	{
		ft_putstr("(null)", n_char);
		return ;
	}
	while (*s)
		*n_char += ft_putchar(*s++);
}
