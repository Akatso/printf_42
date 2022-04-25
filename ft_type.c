#include "ft_printf.h"

size_t	ft_type(char type)
{
	size_t	i;

	i = 0;
	if (type == '%')
		i+= ft_putchar('%');
	else if (type == 'c')
		i += ft_putchar();
	else if (type == 's')
		i+= ft_pustr();
	else if (type == 'd' || type == 'i')
		ft_putnbr();
	else if (type == 'p')
		ft_putptr();
	else if (type =='x')
		ft_puthexa( ,"0123456789abcdef");
	else if (type == 'X')
		ft_puthexa( , "0123456789ABCDEF");
	else if (type == 'u')
		ft_putu();
}
