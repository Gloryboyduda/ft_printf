/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:34:30 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/18 12:14:54 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printptr(void *ptr)
{
	int	count;

	count = 0;
	printstr("0x");
	count += printlowx((long)ptr);
	return (count);
}
