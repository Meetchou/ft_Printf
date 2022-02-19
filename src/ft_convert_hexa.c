/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamanfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:29:59 by kamanfo           #+#    #+#             */
/*   Updated: 2021/12/01 13:33:16 by kamanfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_convert_hexa(unsigned int nb, char *base)
{
	if (nb >= 16)
		ft_convert_hexa(nb / 16, base);
	write(1, &base[nb % 16], 1);
}
