#include "ft_printf.h"

int	ft_putptr(unsigned long nb, int print_prefix)
{
	char	*hex_base;
	int		printed_chars;

	hex_base = "0123456789abcdef";
	printed_chars = 0;
	if (print_prefix == 1)
		printed_chars += ft_putstr("0x");
	if (nb > 16)
	{
		printed_chars += ft_putptr(nb / 16, 0);
		nb %= 16;
	}
	return (ft_putchar(hex_base[nb]) + printed_chars);
}
