/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 20:21:16 by vguerra-          #+#    #+#             */
/*   Updated: 2025/11/23 20:49:14 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_eval_format(va_list args, const char format)
{
	int	len_print;

	len_print = 0;
	if (format == 'c')
		len_print += ft_print_char(va_arg(args, int));
	else if (format == 's')
		len_print += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		len_print += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		len_print += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		len_print += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len_print += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len_print += ft_print_char('%');
	return (len_print);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len_print;

	i = 0;
	len_print = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len_print += ft_eval_format(args, format[i + 1]);
			i++;
		}
		else
			len_print += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (len_print);
}
