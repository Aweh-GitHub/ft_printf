/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:25:48 by thantoni          #+#    #+#             */
/*   Updated: 2025/11/09 22:45:17 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int	main(void)
{
	int ft_printf_count;
	int printf_count;

	ft_printf_count = ft_printf("my %p %p \n", LONG_MIN, LONG_MAX);
	printf_count = printf("my %p %p \n", LONG_MIN, LONG_MAX);
	printf("count: (%d)/(%d)\n", ft_printf_count, printf_count);
	return (0);
}