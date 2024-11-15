/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdig.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:35:42 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/14 19:35:51 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printdig(long nbr, int base)
{
	int count;
	char *symbs;

	symbs = "0123456789abcdef";
	count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		return (printdig(-nbr, base) + 1);
	}
	else if (nbr < base)
		return (printchar(symbs[nbr]));
	else
		{
			count = printdig(nbr / base, base);
			return (count + printdig(nbr % base, base));
		}
}
