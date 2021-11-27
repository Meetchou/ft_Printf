#include "../includes/ft_printf.h"

void ft_convert_ptr(unsigned long int nb, char *base)
{
	if (nb >= 16)
		ft_convert_ptr(nb / 16, base);
	write(1, &base[nb % 16], 1);
}

int	ft_ptrlen(unsigned long int nb)
{
	if (nb >= 16)
		return (1 + ft_ptrlen(nb / 16));
	return (1);
}

int	ft_treat_pointer(va_list param)
{
	char	*base;
	void	*nb;

	base = "0123456789abcdef";
	nb = va_arg(param, void *);
	write(1, "0x", 2);
	ft_convert_ptr((unsigned long int)nb, base);
	return (ft_ptrlen((unsigned long int)nb) + 2);
}

