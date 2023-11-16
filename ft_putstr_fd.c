/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:09:59 by frukundo          #+#    #+#             */
/*   Updated: 2023/11/15 20:01:14 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	len;
	int	temp;

	temp = 0;
	len = 0;
	if (!s)
		return (ft_putstr_fd("(null)", fd));
	i = -1;
	while (s[++i])
	{
		temp = ft_putchar_fd(s[i], fd);
		if (temp < 0)
			return (-1);
		len += temp;
	}
	return (len);
}
