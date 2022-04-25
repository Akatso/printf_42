#include "ft_printf.h"
#include <unistd.h>

size_t	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
