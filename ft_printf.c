/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:25:54 by thantoni          #+#    #+#             */
/*   Updated: 2025/11/09 20:08:11 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

// static size_t output(char const *format, va_list *args)
// {
// 	if (format[0] != FLAG_FORMAT)
// 		return (ft_printdefault(format[0]));
// 	if (format[1] == FORMAT_CHAR)
// 		return (ft_printchar(args));
// 	if (format[1] == FORMAT_STR)
// 		return (ft_printstr(args));
// 	if (format[1] == FORMAT_PTR)
// 		return (ft_printptr(args));
// 	if (format[1] == FORMAT_DEC || format[1] == FORMAT_INT)
// 		return (ft_printdec(args));
// 	if (format[1] == FORMAT_UDEC)
// 		return (ft_printudec(args));
// 	if (format[1] == FORMAT_HEX_LOW)
// 		return (ft_printhexlow(args));
// 	if (format[1] == FORMAT_HEX_UPR)
// 		return (ft_printhexupr(args));
// 	if (format[1] == FORMAT_PERCENT)
// 		return (ft_printpercent());
// 	return (ft_printdefault(format[0]));
// }

int	ft_printf(char const *format, ...)
{
	va_list args;
	size_t i;
	size_t write_count;

	va_start(args, format);
	i = 0;
	write_count = 0;
	while (format[i])
	{
		if (format[i] != FLAG_FORMAT)
			write_count += ft_printdefault(format[i]), i += 1;
		else if (format[i + 1] == FORMAT_CHAR)
			write_count += ft_printchar(&args), i += 2;
		else if (format[i + 1] == FORMAT_STR)
			write_count += ft_printstr(&args), i += 2;
		else if (format[i + 1] == FORMAT_PTR)
			write_count += ft_printptr(&args), i += 2;
		else if (format[i + 1] == FORMAT_DEC || format[i + 1] == FORMAT_INT)
			write_count += ft_printdec(&args), i += 2;
		else if (format[i + 1] == FORMAT_UDEC)
			write_count += ft_printudec(&args), i += 2;
		else if (format[i + 1] == FORMAT_HEX_LOW)
			write_count += ft_printhexlow(&args), i += 2;
		else if (format[i + 1] == FORMAT_HEX_UPR)
			write_count += ft_printhexupr(&args), i += 2;
		else if (format[i + 1] == FORMAT_PERCENT)
			write_count += ft_printpercent(), i += 2;
	}
	va_end(args);
	return (write_count);
}
