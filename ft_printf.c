/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:19:32 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/15 14:19:32 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_format(char type, va_list pt)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += printchar(va_arg(pt, int));
	else if (type == 's')
		count += printstr(va_arg(pt, char *));
	/*else if (type == 'p')
		count += printptr(va_arg(pt, void *));*/
	else if (type == 'd')
		count += printdig((long)va_arg(pt, int));
	/*else if (type == 'i')
		count += printint(va_arg(pt, int), 10);
	*/else if (type == 'u')
		count += printu(va_arg(pt, unsigned int));
	else if (type == 'x')
		count += printlowx((long)va_arg(pt, unsigned int));
	else if (type == 'X')
		count += printupx((long)va_arg(pt, unsigned int));
	else if (type == '%')
		count += printpercent(va_arg(pt, int));
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
int main(void)
{

	printf(":%%:\n");
	ft_printf(":%%:\n");
	printf(":%c:\n", 'c');
	ft_printf(":%c:\n", 'c');
	printf(":%s:\n", "ola");
	ft_printf(":%s:\n", "ola");
	printf(":%d:\n", 32);
	ft_printf(":%d:\n", 32);
	printf(":%u:\n", UINT_MAX);
	ft_printf(":%u:\n", UINT_MAX);
	printf(":%x:\n", 42);
	ft_printf(":%x:\n", 42);
	printf(":%X:\n", 42);
	ft_printf(":%X:\n", 42);
	return 0;
}
