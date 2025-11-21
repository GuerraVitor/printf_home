/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerra- <vguerra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 23:32:54 by vguerra-          #+#    #+#             */
/*   Updated: 2025/11/20 23:46:19 by vguerra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printft.h"

static int	ft_num_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_putnbr_simple(long n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_simple(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	ft_print_nbr(int n)
{
	ft_putnbr_simple(n);
	return (ft_num_len(n));
}

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	char	c;

	len = 0;
	if (n == 0)
		return (write(1, "0", 1));
	if (n >= 10)
		len += ft_print_unsigned(n / 10);
	c = (n % 10) + '0';
	len += write(1, &c, 1);
	return (len);
}
