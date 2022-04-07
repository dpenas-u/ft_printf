/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:12:23 by dpenas-u          #+#    #+#             */
/*   Updated: 2022/04/07 12:32:45 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int i);
void	ft_putnbr_base(int nbr, char *base);
size_t	ft_strlen(const char *s);
void	ft_putunbr(int nbr);

#endif
