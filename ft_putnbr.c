#include "ft_printf.h"

size_t	ft_putnbr(long int nb)
{
	int	i;
	size_t count;
	int	tab[20];

	i = 0;
	count = 0;
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
