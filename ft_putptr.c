#include "ft_printf.h"

size_t	ft_putptr(unsigned long ptr)
{
	size_t	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_puthexa(ptr, "0123456789abcdef");
	return (i);
}
