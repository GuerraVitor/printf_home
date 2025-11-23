/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 20:29:26 by vguerra-          #+#    #+#             */
/*   Updated: 2025/11/23 20:37:01 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_hex(unsigned int n, const char format)
{
	int		len;
	char	*base;

	len = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		len += ft_print_hex(n / 16, format);
	len += write(1, &base[n % 16], 1);
	return (len);
}

/* auxiliar function for pointers */
static int	ft_print_ptr_hex(unsigned long long ptr)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (ptr >= 16)
		len += ft_print_ptr_hex(ptr / 16);
	len += write(1, &base[ptr % 16], 1);
	return (len);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		len += write(1, "(nil)", 5);
		return (len);
	}
	len += write(1, "0x", 2);
	len += ft_print_ptr_hex(ptr);
	return (len);
}
