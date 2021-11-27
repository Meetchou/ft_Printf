#include "../include/ft_printf.h"
#include <stdio.h>

int main(int ac, char **av)
{
	int a;
	a =4;

	(void)ac;
	printf("%d \n", printf("Chaud %d %i, %s, %c, %u, %X %x %p \n",1, 2, NULL, 'c', -1234, 12, -12, &a));
	printf("%d \n", printf("Chaud %d %i, %s, %c, %u, %X %x %p \n",1, 2, "en lousdé", 'c', -1234, 12, -12, &a));
}
