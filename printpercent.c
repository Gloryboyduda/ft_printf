/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printpercent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:37:50 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/16 00:01:03 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printpercent(int c)
{
	c = (char)'%';
	write(1, &c, 1);
	return(1);
}

/* int main()
{
	printf("%c", printpercent('%'));
	return 0;
} */