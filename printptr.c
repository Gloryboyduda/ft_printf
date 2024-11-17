/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:34:30 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/17 21:48:06 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printptr(void *ptr)
{
	ptr = malloc(sizeof(void *));
	if (!ptr)
		return (-1);
	printstr("0x");
	printlowx((long)&ptr);
	return (0);
	free(ptr);
}
