#include "ft_printf.h"
#include <unistd.h>

size_t	ft_putstr(char *s)
{
	return(write(1, s, ft_strlen(s)));
}
