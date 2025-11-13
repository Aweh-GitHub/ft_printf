/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:25:54 by thantoni          #+#    #+#             */
/*   Updated: 2025/11/13 14:35:44 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static size_t	output_format(char const c_format, va_list *args)
{
	if (c_format == FORMAT_CHAR)
		return (ft_printchar(args));
	if (c_format == FORMAT_STR)
		return (ft_printstr(args));
	if (c_format == FORMAT_PTR)
		return (ft_printptr(args));
	if (c_format == FORMAT_DEC || c_format == FORMAT_INT)
		return (ft_printdec(args));
	if (c_format == FORMAT_UDEC)
		return (ft_printudec(args));
	if (c_format == FORMAT_HEX_LOW)
		return (ft_printhexlow(args));
	if (c_format == FORMAT_HEX_UPR)
		return (ft_printhexupr(args));
	if (c_format == FORMAT_PERCENT)
		return (ft_printpercent());
	return (0);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	size_t	i;
	size_t	write_count;

	va_start(args, format);
	i = 0;
	write_count = 0;
	while (format[i])
	{
		if (format[i] != FLAG_FORMAT)
		{
			write_count += ft_printdefault(format[i]);
			i++;
		}
		else
		{
			write_count += output_format(format[i + 1], &args);
			i += 2;
		}
	}
	va_end(args);
	return (write_count);
}
