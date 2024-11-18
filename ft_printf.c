/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:19:32 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/18 18:06:08 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char type, va_list pt)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += printchar(va_arg(pt, int));
	else if (type == 's')
		count += printstr(va_arg(pt, char *));
	else if (type == 'p')
		count += printptr(va_arg(pt, void *));
	else if (type == 'd' || type == 'i')
		count += printdig((long)va_arg(pt, int));
	else if (type == 'u')
		count += printu(va_arg(pt, unsigned int));
	else if (type == 'x')
		count += printlowx((long)va_arg(pt, unsigned int));
	else if (type == 'X')
		count += printupx((long)va_arg(pt, unsigned int));
	else if (type == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	pt;

	va_start(pt, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += print_format(*(++format), pt);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(pt);
	return (count);
}
/*
int main(void)
{

	printf(":%%:\n");
	ft_printf(":%%:\n");
	printf(":%c:\n", 'c');
	ft_printf(":%c:\n", 'c');
	printf(":%s:\n", "ola");
	ft_printf(":%s:\n", "ola");
	printf(":%d:\n", 10);
	ft_printf(":%d:\n", 10);
	printf(":%u:\n", UINT_MAX);
	ft_printf(":%u:\n", UINT_MAX);
	printf(":%x:\n", 42);
	ft_printf(":%x:\n", 42);
	printf(":%X:\n", 42);
	ft_printf(":%X:\n", 42);
	printf(":%i:\n", 010);
	ft_printf(":%i:\n", 010);
	printf(":%p %p:\n", (void *)LONG_MIN, (void *)LONG_MAX);
	ft_printf(":%p %p:\n", (void *)LONG_MIN, (void *)LONG_MAX);
	printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	return 0;
}*/
