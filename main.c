#include "printft.h"
#include <stdio.h>

int main(void)
{
	int len_ft;
	int len_real;

	len_ft = ft_printf("Meu: %s\n", "Ola 42");
	len_real = printf("Org: %s\n", "Ola 42");
	printf("Len Meu s: %d | Len Org: %d\n\n", len_ft, len_real);

	len_ft = ft_printf("Meu: %c\n", "C");
	len_real = printf("Org: %c\n", "C");
	printf("Len Meu c: %d | Len Org c: %d\n\n", len_ft, len_real);

	len_ft = ft_printf("Meu: %c\n", "C");
	len_real = printf("Org: %c\n", "C");
	printf("Len Meu c: %d | Len Org c: %d\n\n", len_ft, len_real);

	return (0);
}
