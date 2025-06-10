#include "ft_printf.h"
#include "libft.h"

void	ft_putnbr_u(unsigned int nb)
{
	if (nb > 9)
	{
		ft_putnbr_u(nb / 10);
		nb %= 10;
	}
	ft_putchar_fd(nb + '0', 1);
}

void	ft_putnbr_hex(unsigned long nb)
{
	char	*hex_base;

	hex_base = "0123456789ABCDEF";
	if (nb > 16)
	{
		ft_putnbr_hex(nb / 16);
		nb %= 16;
	}
	ft_putchar_fd(hex_base[nb], 1);
}
