/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:52:24 by slepetit          #+#    #+#             */
/*   Updated: 2022/04/28 22:26:18 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <stdarg.h>

size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t	ft_putnbr(long int nb);
size_t	ft_puthexa(unsigned long int nb, char *base);
size_t	ft_putptr(unsigned long ptr);
size_t	ft_putu(unsigned long long nb, char *base);
size_t	ft_strlen(const char *s);
size_t	ft_type(char type, va_list li);
int		ft_check_s(va_list li);
int		ft_check_p(va_list li);
int		ft_printf(const char *type, ...);

#endif
