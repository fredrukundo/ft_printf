/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:19:08 by hel-asli          #+#    #+#             */
/*   Updated: 2023/12/04 10:05:02 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_formats(const char c, va_list args, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (c == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), count);
	else if (c == '%')
		ft_putchar('%', count);
	else if (c == 'x')
		ft_puthex(va_arg(args, unsigned int), SYMBOLS_HEX_LOWER, count);
	else if (c == 'X')
		ft_puthex(va_arg(args, unsigned int), SYMBOLS_HEX, count);
	else if (c == 'p')
		ft_putaddr(va_arg(args, unsigned long long), count);
	else
		ft_putchar(c, count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0; 
	va_start(args, str);
	if (write(1, "", 0) == -1)
		return (-1);
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			str++;
			handle_formats(*str, args, &count);
		}
		else
		{
			ft_putchar(*str, &count);
		}
		str++;
	}
	va_end(args);
	return (count);
}
