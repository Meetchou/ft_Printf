#include "../includes/ft_printf.h"

int	ft_hexa_nbrlen(unsigned int nb)
{
	if (nb >= 16)
		return (1 + ft_hexa_nbrlen(nb / 16));
	return (1);
}
