/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamanfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:35:24 by kamanfo           #+#    #+#             */
/*   Updated: 2021/12/01 13:36:15 by kamanfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/libft.h"

void	ft_convert_hexa(unsigned int nb, char *base);
int		ft_hexa_nbrlen(unsigned int nb);
int		ft_printf(const char *format, ...);
int		ft_treat_char(va_list param);
int		ft_treat_conv(char *format, va_list param, int i);
int		ft_treat_hexa(char c, va_list param);
int		ft_treat_int(va_list param);
int		ft_treat_pointer(va_list param);
int		ft_treat_string(va_list param);
void	ft_put_unsigned_nbr(unsigned int n);
int		ft_unsigned_nbrlen(unsigned int nb);
int		ft_treat_unsigned_int(va_list param);

#endif
