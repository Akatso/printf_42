#include "ft_printf.h"

void	ft_putnbr(long int nb)
{
	int	i;
	int	tab[20];

	i = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-');
		nb *= -1;
	}
	if (nb == 0)
		ft_putchar('0', fd);
	while (nb > 0)
	{
		tab[i] = nb % 10;
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(tab[i] + 48);
		i--;
	}
}
