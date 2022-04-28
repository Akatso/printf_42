/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:54:10 by slepetit          #+#    #+#             */
/*   Updated: 2022/04/28 22:35:49 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_s(va_list li)
{
	char	*tmp;

	tmp = va_arg(li, char *);
	if (tmp == NULL)
		return (ft_putstr("(null)"));
	else
		return (ft_putstr(tmp));
}

int	ft_check_p(va_list li)
{
	long int	nb;

	nb = va_arg(li, long int);
	if (nb == 0)
		return (ft_putstr("(nil)"));
	else
		return (ft_putptr(nb));
}

size_t	ft_type(char type, va_list li)
{
	size_t	i;

	i = 0;
	if (type == '%')
		return (ft_putchar('%'));
	else if (type == 'c')
		return (ft_putchar(va_arg(li, int)));
	else if (type == 's')
		return (ft_check_s(li));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(li, int)));
	else if (type == 'p')
		return (ft_check_p(li));
	else if (type == 'x')
		return (ft_puthexa(va_arg(li, unsigned int), "0123456789abcdef"));
	else if (type == 'X')
		return (ft_puthexa(va_arg(li, unsigned int), "0123456789ABCDEF"));
	else
		return (ft_putu(va_arg(li, unsigned int), "0123456789"));
}
