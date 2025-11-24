#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int len_ft;
	int len_real;

	printf("\n====== test for ft_print_char: ======\n");
	len_ft = ft_printf("my: %c\n", 'F');
	len_real = printf("org: %c\n", 'F');
	printf("my len s: %d | org len: %d\n\n", len_ft, len_real);

	printf("====== test for ft_print_char %%: ======\n");
	len_ft = ft_printf("my: %X\n", (int)2000);
	len_real = printf("org: %X\n", (int)2000);
	printf("my len s: %d | org len: %d\n\n", len_ft, len_real);

	printf("====== test for ft_print_str: ======\n");
	len_ft = ft_printf("my: %s\n", "Fla81");
	len_real = printf("org: %s\n", "Fla81");
	printf("my len s: %d | org len: %d\n\n", len_ft, len_real);

	printf("====== test for ft_print_ptr: (to do)======\n\n");
	//len_ft = ft_printf("my: %s\n", 'c');
	//len_real = printf("org: %s\n", 'c');
	printf("my len s: %d | org len: %d\n\n", len_ft, len_real);

	printf("====== test for ft_print_nbr: ======\n");
	len_ft = ft_printf("my: %d\n", (int)2000);
	len_real = printf("org: %d\n", (int)2000);
	printf("my len s: %d | org len: %d\n\n", len_ft, len_real);

	printf("====== test for ft_print_unsigned: (to do)======\n\n");
	//len_ft = ft_printf("my: %s\n", 'c');
	//len_real = printf("org: %s\n", 'c');
	printf("my len s: %d | org len: %d\n\n", len_ft, len_real);

	printf("====== test for ft_print_hex x: ======\n");
	len_ft = ft_printf("my: %x\n", (int)2000);
	len_real = printf("org: %x\n", (int)2000);
	printf("my len s: %d | org len: %d\n\n", len_ft, len_real);

	printf("====== test for ft_print_hex X: ======\n");
	len_ft = ft_printf("my: %X\n", (int)2000);
	len_real = printf("org: %X\n", (int)2000);
	printf("my len s: %d | org len: %d\n\n", len_ft, len_real);

	return (0);
}

