int	ft_printf(const char *type, ...)
{
	size_t	i;

	i = 0;
	while (type[i])
	{
		if (type[i] == '%')
			ft_type(type[++i]);
		else if (type[i] != '%')
			i++;
	}
	return (i);
}
