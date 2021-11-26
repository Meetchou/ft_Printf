/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamanfo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:56:52 by kamanfo           #+#    #+#             */
/*   Updated: 2021/11/26 16:48:14 by kamanfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_treat_string(va_list param)
{
	char *str;

	str = va_arg(param, char *);
	return (write(1, &c, ft_strlen(str)));
}

