/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:12:23 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/08 08:25:53 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
void	ft_putstr(char *str, int *n_char);
void	ft_putnbr_base(int nbr, char *base, int *n_char);
size_t	ft_strlen(const char *s);
void	ft_putunbr(int nbr, char *base, int fraction, int *n_char);
void	ft_putpnbr_base(unsigned long int nbr, char *base, int *n_char);

#endif
