/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamanfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:19:32 by kamanfo           #+#    #+#             */
/*   Updated: 2021/11/26 16:50:50 by kamanfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "ft_printf.h"

int	ft_threat_unsigned_int(va_list param)
{
	int nb;

	nb = va_arg(param, unsigned int);
	ft_putnbr(nb);
	return (ft_nbrlen);
}

