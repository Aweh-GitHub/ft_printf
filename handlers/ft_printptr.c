/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:11:13 by thantoni          #+#    #+#             */
/*   Updated: 2025/11/09 22:52:11 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <unistd.h>
#include <stdarg.h>

size_t	ft_printptr(va_list *args)
{
	unsigned long long int adress;

	adress = (unsigned long long int) va_arg(*args, void *);
	write(1, "0x", 2);
	return (2 + ft_putbase_unsigned(adress, "0123456789abcdef"));
}