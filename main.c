#include "printft.h"
#include <stdio.h>

int main(void)
{
	int len_ft;
	int len_real;

	len_ft = ft_printf("\nMeu: %s\n", "Ola 42");
	len_real = printf("Org: %s\n", "Ola 42");
	printf("Len Meu s: %d | Len Org: %d\n\n", len_ft, len_real);

	len_ft = ft_printf("Meu: %c\n", 'c');
	len_real = printf("Org: %c\n", 'c');
	printf("Len Meu c: %d | Len Org c: %d\n\n", len_ft, len_real);

	len_ft = ft_printf("Meu: %d\n", (int)2000);
	len_real = printf("Org: %d\n", (int)2000);
	printf("Len Meu d: %d | Len Org d: %d\n\n", len_ft, len_real);

	return (0);
}

