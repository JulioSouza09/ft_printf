#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nb)
{
	int	printed_chars;

	printed_chars = 0;
	if (nb > 9)
	{
		printed_chars += ft_putnbr(nb / 10);
		nb %= 10;
	}
	return (printed_chars + ft_putchar(nb + '0'));
}

// int	main(void)
// {
// 	int	count = ft_putnbr(-2147483647);
// 
// 	printf("\n%d\n", count);
// 	return (0);
// }
