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
