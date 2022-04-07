/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:01:47 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/07 16:45:37 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*s;
	char	c;
	char	*s1;
	int	i;
	int	e;

	s = "%p";
	s1 = "11";
	e = 1;
	c = 10;
	i = 0;
	i = ft_printf(s, (void *)c);
	printf("\nft: %i\n", i);
	i = printf(s, (void *)c);
	printf("\nft: %i\n", i);
}
