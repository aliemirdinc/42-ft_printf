/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldinc <aldinc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:10:41 by aldinc            #+#    #+#             */
/*   Updated: 2024/10/23 18:39:45 by aldinc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_check_type(va_list args, char c);
int	ft_putchar(int c);
int	ft_putstr(const char *s);
int	ft_putnbr(int nbr);
int	ft_print_unsigned(unsigned int unbr);
int	ft_printptr(unsigned long long p);
int	ft_print_hex(unsigned int hex, const char format);

#endif
