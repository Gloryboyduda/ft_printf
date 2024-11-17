/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlowx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:35:42 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/14 19:35:51 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printlowx(long nbr)
{
	int		count;
	char	*symbs;

	symbs = "0123456789abcdef";
	count = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		return (printlowx(-nbr) + 1);
	}
	else if (nbr < 16)
		return (printchar(symbs[nbr]));
	else
	{
		count = printlowx(nbr / 16);
		return (count + printlowx(nbr % 16));
	}
}
