/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-asli <hel-asli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:15:36 by hel-asli          #+#    #+#             */
/*   Updated: 2023/12/01 10:47:41 by hel-asli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# define SYMBOLS_HEX "0123456789ABCDEF"
# define SYMBOLS_HEX_LOWER "0123456789abcdef"

void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putnbr_u(unsigned int n, int *count);
void	ft_puthex(unsigned int n, char *base, int *count);
int		ft_printf(const char *str, ...);
void	ft_putaddr(unsigned long long n, int *count);

#endif
