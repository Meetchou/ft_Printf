/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamanfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:19:32 by kamanfo           #+#    #+#             */
/*   Updated: 2021/12/01 13:32:46 by kamanfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_put_unsigned_nbr(unsigned int n)
{
	unsigned int	nb;

	nb = n;
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar(nb + '0');
}

int	ft_unsigned_nbrlen(unsigned int nb)
{
	if (nb > 9)
		return (1 + ft_nbrlen(nb / 10));
	return (1);
}

int	ft_treat_unsigned_int(va_list param)
{
	unsigned int	nb;

	nb = va_arg(param, unsigned int);
	ft_put_unsigned_nbr(nb);
	return (ft_unsigned_nbrlen(nb));
}
