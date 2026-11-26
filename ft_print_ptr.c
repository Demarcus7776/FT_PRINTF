/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 15:47:42 by mohachad          #+#    #+#             */
/*   Updated: 2026/11/20 15:47:45 by mohachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printhex(unsigned long nb)
{
	char	*b;
	int		c;

	b = "0123456789abcdef";
	c = 0;
	if (nb >= 16)
		c += printhex(nb / 16);
	c += write(1, &b[nb % 16], 1);
	return (c);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	p;
	int				c;

	if (!ptr)
		return (write(1, "(nil)", 5));
	p = (unsigned long)ptr;
	c = write(1, "0x", 2);
	c += printhex(p);
	return (c);
}
