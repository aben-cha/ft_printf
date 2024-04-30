/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:30:17 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/22 21:49:27 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_nbr_digits(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putnbr(int n);
int	ft_hex(unsigned int n, char c);
int	ft_hex_p(unsigned long n);
int	ft_check_conversions(const char *s, va_list ap);

#endif
