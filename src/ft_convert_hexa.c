#include "../includes/ft_printf.h"

void ft_convert_hexa(unsigned int nb, char *base)
{
	if (nb >= 16)
		ft_convert_hexa(nb / 16, base);
	write(1, &base[nb % 16], 1);
}
