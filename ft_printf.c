/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamanfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:58:08 by kamanfo           #+#    #+#             */
/*   Updated: 2021/11/26 14:07:25 by kamanfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

int ft_printf(const char *format, ...)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_threat_conv(format, );
		}
	}
}


