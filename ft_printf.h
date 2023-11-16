/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frukundo <frukundo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:44:21 by frukundo          #+#    #+#             */
/*   Updated: 2023/11/16 18:17:24 by frukundo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strlen(const char *str);
int		ft_printf(const char *format, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_pointer(size_t x);
int		ft_putstr_fd(char *s, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_u_putnbr_fd(unsigned int n, int fd);
int		ft_hexadecimal(unsigned int x, char a);

#endif