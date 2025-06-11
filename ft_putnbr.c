#include <stdio.h>
#include "ft_printf.h"

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

int	main(void)
{

}
