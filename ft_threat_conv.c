/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_threat_conv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamanfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:54:08 by kamanfo           #+#    #+#             */
/*   Updated: 2021/11/26 16:41:18 by kamanfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_conv(char *format, va_list param, int i)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
		count += ft_treat_char(param);
	else if (format[i] == 's')
		count += ft_treat_string(param);
	else if (format[i] == 'p')
		count += ft_treat_pointeur(param);
	else if (format[i] == 'd' || format[i] == 'i')
		count += ft_treat_int(param);
	else if (format[i] == 'u')
		count += ft_treat_unsigned_int(param);
	else if (format[i] == 'x'|| format[i] == 'X')
		count += ft_treat_hexa(format[i], param);
	else if (format[i] == '%')
		count += write(1, "%", 1);
	return (count);
}


