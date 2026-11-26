/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 15:49:20 by mohachad          #+#    #+#             */
/*   Updated: 2026/11/20 15:49:23 by mohachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_print_char(char c);
int	ft_print_hex(unsigned int n, char f);
int	ft_print_nbr(int n);
int	ft_print_percent(void);
int	ft_print_ptr(void *ptr);
int	ft_print_str(char *str);
int	ft_print_unnbr(unsigned int n);
int	ft_printf(const char *s, ...);

#endif
