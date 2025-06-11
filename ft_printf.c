/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcesar-s <jcesar-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:38:47 by jcesar-s          #+#    #+#             */
/*   Updated: 2025/05/24 17:42:34 by jcesar-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	value;
	int	printed_chars;

	va_start(value, str);
	printed_chars = 0;
	while (*str)
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str++, 1);
			++printed_chars;
			continue;
		}
		if (*++str == 'c')
			printed_chars += ft_putchar_fd(va_arg(value, int), 1);
		else if (*str == 's')
			printed_chars += ft_putstr_fd(va_arg(value, char*), 1);
		else if (*str == 'i' || *str == 'd')
			printed_chars += ft_putnbr_fd(va_arg(value, int), 1);
		else if (*str == '%')
			printed_chars += ft_putchar_fd('%', 1);
		else if (*str == 'u')
			printed_chars += ft_putnbr_u(va_arg(value, unsigned int));
		else if (*str == 'p')
			printed_chars += ft_putptr((unsigned long)va_arg(value, void *), 1);
		else if (*str == 'X')
			printed_chars += ft_putnbr_hex((unsigned int)va_arg(value, unsigned int), 'u');
		else if (*str == 'x')
			printed_chars += ft_putnbr_hex((unsigned int)va_arg(value, unsigned int), 'l');
		++str;
	}
	va_end(value);
	return (printed_chars);
}

int	main(void)
{
	char	*ptr = "abcderf";

	ft_printf("This is a %c (char test) and a %s (string test)\n", '2', "Japes eh viado");
	ft_printf("I am %i years old\n", 10 + 12);
	ft_printf("The ultimate answer of life and everything is %d\n", 20 + 10 + 12);
	ft_printf("Now I want to print a percent sign (%%)\n");
	ft_printf("Printing unsigned int: %u\nPrinting unsigned int with negative input: %u\n", 234, -1);
	ft_printf("%X\n", -1);
	printf("%X\n", -1);
	ft_printf("%x\n", -1);
	printf("%x\n", -1);
	int	count = ft_putnbr_u(290384933);
	printf("The count is %d\n", count);
	return 0;
}
