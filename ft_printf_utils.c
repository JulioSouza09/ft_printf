#include "ft_printf.h"
#include "libft.h"

int	ft_putnbr_u(unsigned int nb)
{
	int	printed_chars;

	printed_chars = 0;
	if (nb > 9)
	{
		printed_chars += ft_putnbr_u(nb / 10);
		nb %= 10;
	}
	ft_putchar_fd(nb + '0', 1);
	return (printed_chars + 1);
}

void	ft_putnbr_hex(unsigned long nb, int case_option)
{
	char	*hex_base;

	hex_base = "0123456789ABCDEF";
	if (nb > 16)
	{
		ft_putnbr_hex(nb / 16, case_option);
		nb %= 16;
	}
	if (case_option == 'u')
		ft_putchar_fd(hex_base[nb], 1);
	else if (case_option == 'l')
		ft_putchar_fd(ft_tolower(hex_base[nb]), 1);
}

void	ft_putptr(unsigned long nb, int print_prefix)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	if (print_prefix == 1)
		ft_putstr_fd("0x", 1);
	if (nb > 16)
	{
		ft_putptr(nb / 16, 0);
		nb %= 16;
	}
	ft_putchar_fd(hex_base[nb], 1);
}
