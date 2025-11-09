/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:25:48 by thantoni          #+#    #+#             */
/*   Updated: 2025/11/09 17:37:47 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdlib.h>

int	main(void)
{
	int	*value;
	
	value = malloc(sizeof(int));
	*value = 69;
	ft_printf("char: '%c'\n", 'a');
	ft_printf("str: \"%s\"\n", "toi");
	ft_printf("ptr: %p\n", value);
	ft_printf("dec: %d, int: %i\n", -2147483648, 2147483647);
	ft_printf("udec: %u\n", 4294967295);
	ft_printf("hexlow: %x\n", 69694269);
	ft_printf("hexupr: %X\n", 69694269);
	ft_printf("precent: %%\n");
	return (0);
}