/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:01:47 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/07 13:52:23 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*s;
	char	c;
	char	*s1;
	int	i;

	s = "%s";
	s1 = "amigo de";
	i = -400;
	c = '0';
	i = ft_printf(s, s1);
	printf("\nft: %i\n", i);
	i = printf(s, s1);
	printf("\nft: %i\n", i);
}
