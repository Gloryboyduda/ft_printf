/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:55:29 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/15 14:55:29 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINFT_H
# define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int	printchar(int c);
int	printstr(char *str);
int	printdig(long nbr);
int	printlowx(long nbr);
int	printupx(long nbr);
int	printu(unsigned int n);
int	ft_printf(const char *format, ...);
int	printpercent(int c);



# endif