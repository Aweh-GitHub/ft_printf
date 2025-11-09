/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:52:56 by thantoni          #+#    #+#             */
/*   Updated: 2025/11/09 16:09:16 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "unistd.h"

void ft_putbase(long dec, char const *base)
{
    if (dec < 0)
        write(1, "-", 1), dec = -dec;
    ft_putbase_unsigned((unsigned long)dec, base);
}

void ft_putbase_unsigned(unsigned long udec, char const *base)
{
    size_t base_len = 0;
	char c;

    while (base[base_len])
        base_len++;
    if (udec >= base_len)
        ft_putbase_unsigned(udec / base_len, base);
    c = base[udec % base_len];
    write(1, &c, 1);
}

