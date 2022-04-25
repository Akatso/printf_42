#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>

size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t	ft_putnbr(long int nb);
size_t	ft_puthexa(long int nb, char *base);
size_t	ft_putptr(unsigned long ptr);
size_t	ft_strlen(const char *s);
int		ft_printf(const char *type, ...);

#endif
