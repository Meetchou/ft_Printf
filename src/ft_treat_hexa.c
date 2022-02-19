/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamanfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:43:26 by kamanfo           #+#    #+#             */
/*   Updated: 2021/12/01 13:31:55 by kamanfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_treat_hexa(char c, va_list param)
{
	char			*base;
	unsigned int	nb;

	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	nb = va_arg(param, unsigned int);
	ft_convert_hexa(nb, base);
	return (ft_hexa_nbrlen(nb));
}
