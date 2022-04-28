/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slepetit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:53:16 by slepetit          #+#    #+#             */
/*   Updated: 2022/04/28 22:45:25 by slepetit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr(long int nb)
{
	size_t	count;
	int		i;
	int		tab[20];

	count = 0;
	i = 0;
	if (nb < 0)
	{
		count = ft_putchar('-');
		nb *= -1;
	}
	if (nb == 0)
		count = ft_putchar('0');
	while (nb > 0)
	{
		tab[i++] = nb % 10;
		nb /= 10;
	}
	count += i;
	i--;
	while (i >= 0)
		ft_putchar(tab[i--] + 48);
	return (count);
}
