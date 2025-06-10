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

#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	value;

	va_start(value, str);
	while (*str)
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str++, 1);
			continue;
		}
		++str;
	}
	va_end(value);
	return (0);
}

int	main(void)
{
	ft_printf("This is a %test\n");
	return 0;
}
