/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:22:47 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/06 12:47:36 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	ft_printf(char const *str, ...)
{

	va_list	argptr;
	va_list	copy;
	//char	*s = 0;
	va_start(argptr, str);
	long int	i;
	char	c;
	char	*s;
	float	f;
	void	*v;

	i = 1;
	printf("\n%lu\n");
	c = 'a';
	printf("\n%lu\n", sizeof(c));
	s = "HOLA";
	printf("\n%lu\n", sizeof(s));
	f = -1.2;
	printf("\n%lu\n", sizeof(f));
	v = s;
	printf("\n%lu\n", sizeof(v));
	va_copy(argptr, copy);
	s = va_arg(argptr, char *);
	printf("\n%s\n", s);
	//s = va_arg(copy, char *);
	printf("\n%s\n", s);
/*
	while ((s = va_arg(argptr, char *)))
	{
		printf("\n%s\n", s);
	}
*/
	//va_copy(argptr, copy);
	/*
	if (va_arg(argptr, int))
	{
		printf("\nAQUI\n");
		//s = va_arg(copy, char *);
		//printf("\n%s\n", s);
	}
	*/
	/*
	else if (va_arg(argptr, int))
	{
		int	i = va_arg(argptr, int);
		printf("\n%i\n", i);
		return (1);
	}
	*/
	//va_end(argptr);
	//va_end(copy);
	return (1);
}

int	main(void)
{
	char	*s;
	char	*s1;
	int	i;

	s = "Hola";
	s1 = "HWY";
	i = 58;
	ft_printf(s1, s, s1);
}