/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamanfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:13:04 by kamanfo           #+#    #+#             */
/*   Updated: 2021/11/26 16:48:40 by kamanfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_treat_int(va_list param)
{
	int nb;

	nb = va_arg(param, int);
	ft_putnbr(nb);
	return (ft_nbrlen(nb));
}

