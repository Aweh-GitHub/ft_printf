/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:25:54 by thantoni          #+#    #+#             */
/*   Updated: 2025/11/09 16:39:26 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static size_t output(char const *format, va_list *args)
{
	if (format[0] != FLAG_FORMAT)
		return (ft_printdefault(format[0]));
	if (format[1] == FORMAT_CHAR)
		return (ft_printchar(args));
	if (format[1] == FORMAT_STR)
		return (ft_printstr(args));
	if (format[1] == FORMAT_PTR)
		return (ft_printptr(args));
	if (format[1] == FORMAT_DEC || format[1] == FORMAT_INT)
		return (ft_printdec(args));
	if (format[1] == FORMAT_UDEC)
		return (ft_printudec(args));
	if (format[1] == FORMAT_HEX_LOW)
		return (ft_printhexlow(args));
	if (format[1] == FORMAT_HEX_UPR)
		return (ft_printhexupr(args));
	if (format[1] == FORMAT_PERCENT)
		return (ft_printpercent());
	return (ft_printdefault(format[0]));
}

void	ft_printf(char const *format, ...)
{
	va_list args;
	size_t i;

	va_start(args, format);
	i = 0;
	while (format[i])
		i += output(&format[i], &args);
	va_end(args);
}