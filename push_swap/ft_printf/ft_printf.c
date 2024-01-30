/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seckhard <seckhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:32:47 by seckhard          #+#    #+#             */
/*   Updated: 2024/01/23 21:21:16 by seckhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_putchar((va_arg(args, int)));
	else if (format == 's')
		length += ft_putstr((va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		length += ft_putnbr((va_arg(args, int)));
	else if (format == 'X' || format == 'x')
		length += ft_puthexa(va_arg(args, unsigned int), format);
	else if (format == 'p')
		length += ft_handle_ptr(va_arg(args, unsigned long), 0);
	else if (format == 'u')
		length += ft_putunsignednbr(va_arg(args, unsigned int));
	else if (format == '%')
		length += ft_putchar('%');
	return (length);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			length;

	length = 0;
	if (format == 0)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			length += ft_putchar(*format);
		else if (*format == '%')
		{
			format++;
			length += ft_format(args, *format);
		}
		format++;
	}
	va_end(args);
	return (length);
}

/*int	main(void)
{
	char	c = 's';
	char	s[] = "Samuel";
	void 	*p = 0;
	int		d = -10;
	int		i = -10;
	int		u = 4242;
	int		x = 12345;
	int		X = 12345;
	int		resultorginal;
	int		resultmy;
	int		test;
	printf("%c\n", c);
	ft_printf("%c\n", c);
	printf("%s\n", s);
	ft_printf("%s\n", s);
	printf("%p\n", p);
	test = ft_printf("%p\n", p);
	printf("test %d", test);
	printf("%d\n", d);
	ft_printf("%d, %d, %d\n", d - 1, i, u);
	printf("%i\n", i);
	ft_printf("%i\n", i);
	printf("%u\n", u);
	ft_printf("%u\n", u);
	printf("%x\n", x);
	ft_printf("%x\n", x);
	printf("%X\n", X);
	ft_printf("%X\n", X);
	printf("%%\n");
	ft_printf("%%\n");
	
	resultorginal = printf("%d\n", d);
	resultmy = ft_printf("%d\n", d);
	printf("%d\n", resultorginal);
	ft_printf("%d\n", resultmy);
	return (0);	
}*/
