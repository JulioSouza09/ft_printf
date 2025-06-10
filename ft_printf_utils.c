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

void	ft_putnbr_hex(unsigned long nb, char case)
{
	char	*hex_base;

	hex_base = "0123456789ABCDEF";
	if (nb > 16)
	{
		ft_putnbr_hex(nb / 16, case);
		nb %= 16;
	}
	if (case == 'u')
		ft_putchar_fd(hex_base[nb], 1);
	else if (case == 'l')
		ft_putchar_fd(ft_tolower(hex_base[nb]), 1);
	else
		return(ft_putstr_fd("Invalid option\n", 2));
}
