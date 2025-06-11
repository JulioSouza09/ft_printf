#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (ft_putstr("(null)");
	while (*str)
		len += ft_putchar(*str++);
	return (len);
}
