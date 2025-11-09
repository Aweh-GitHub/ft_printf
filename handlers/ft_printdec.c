/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:12:23 by thantoni          #+#    #+#             */
/*   Updated: 2025/11/09 16:09:27 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdarg.h>

size_t ft_printdec(va_list *args)
{
	int	dec;

	dec = va_arg(*args, int);
	ft_putbase(dec, "0123456789");
	return (2);
}