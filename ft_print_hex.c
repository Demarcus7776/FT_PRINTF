/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 15:46:51 by mohachad          #+#    #+#             */
/*   Updated: 2026/11/20 15:46:55 by mohachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char f)
{
	char	*b;
	int		count;

	count = 0;
	if (f == 'x')
		b = "0123456789abcdef";
	else
		b = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_print_hex(n / 16, f);
	count += write(1, &b[n % 16], 1);
	return (count);
}
