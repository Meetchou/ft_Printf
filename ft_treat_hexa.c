/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamanfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:43:26 by kamanfo           #+#    #+#             */
/*   Updated: 2021/11/26 16:44:44 by kamanfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_hexa(char c, va_list param)
{
	char *nb;

	nb = va_arg(param, int);
	ft_putnbr(nb);
	return (ft_nbrlen);
}

