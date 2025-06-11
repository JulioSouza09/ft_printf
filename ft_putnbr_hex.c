#include "libft.h"
#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long nb, int case_option)
{
	char	*hex_base;
	int		printed_chars;

	hex_base = "0123456789ABCDEF";
	printed_chars = 0;
	if (nb > 16)
	{
		ft_putnbr_hex(nb / 16, case_option);
		++printed_chars;
		nb %= 16;
	}
	if (case_option == 'u')
		return (ft_putchar(hex_base[nb]) + printed_chars);
	else if (case_option == 'l')
		return (ft_putchar(ft_tolower(hex_base[nb])) + printed_chars);
	else
		return (-1);
}
