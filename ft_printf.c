/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:33:51 by frukundo          #+#    #+#             */
/*   Updated: 2023/11/16 18:22:25 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_for_printf(char a)
{
	if (a == 'c' || a == 's' || a == 'p' || a == 'd' || a == 'i' || a == 'u'
		|| a == 'x' || a == 'X' || a == '%')
		return (1);
	return (0);
}

int	ft_checkflag(va_list args, char a, int *len)
{
	int	temp;

	temp = 0;
	if (a == 'c')
		temp = ft_putchar_fd(va_arg(args, int), 1);
	else if (a == 's')
		temp = ft_putstr_fd(va_arg(args, char *), 1);
	else if (a == 'p')
		temp = ft_pointer(va_arg(args, size_t));
	else if (a == 'd' || a == 'i')
		temp = ft_putnbr_fd(va_arg(args, int), 1);
	else if (a == 'u')
		temp = ft_u_putnbr_fd(va_arg(args, unsigned int), 1);
	else if (a == 'x' || a == 'X')
		temp = ft_hexadecimal(va_arg(args, unsigned int), a);
	else if (a == '%')
		temp = ft_putchar_fd('%', 1);
	else
		return (-1);
	if (temp < 0)
		*len = -1;
	else
		*len += temp;
	return (*len);
}

int	process_format(const char *format, va_list args, int *len_ptr)
{
	int	i;
	int	len;

	i = 0;
	len = *len_ptr;
	while (format[i])
	{
		if (format[i] == '%' && ft_is_for_printf(format[i + 1]))
		{
			len = ft_checkflag(args, format[i + 1], &len);
			if (len < 0)
				return (-1);
			i++;
		}
		else if (format[i] != '%')
		{
			len += ft_putchar_fd(format[i], 1);
			if (len < 0)
				return (-1);
		}
		i++;
	}
	*len_ptr = len;
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	if (process_format(format, args, &len) < 0)
	{
		va_end(args);
		return (-1);
	}
	va_end(args);
	return (len);
}
