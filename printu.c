/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:36:10 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/16 00:00:04 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printu(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
		count += printchar(n + '0');
	else
	{
		count += printu(n / 10);
		count += printu(n % 10);
	}
	return (count);
}
