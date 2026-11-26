/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 15:48:41 by mohachad          #+#    #+#             */
/*   Updated: 2026/11/20 15:48:43 by mohachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_ts(char s, va_list args)
{
	if (s == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (s == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (s == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (s == 'd' || s == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (s == 'u')
		return (ft_print_unnbr(va_arg(args, unsigned int)));
	else if (s == 'x' || s == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), s));
	else if (s == '%')
		return (ft_print_percent());
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!s)
		return (0);
	va_start(args, s);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == '\0')
				break ;
			count += check_ts(s[i], args);
		}
		else
			count += ft_print_char(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}
