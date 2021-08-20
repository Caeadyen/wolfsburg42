/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:59:28 by hrings            #+#    #+#             */
/*   Updated: 2021/08/17 20:17:05 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	print_line(void *addr, unsigned int size);
void	print_hex(long int addr, int size);
void	print_char(unsigned char c);
void	putchar(char c, int times);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	index;
	unsigned int	line_size;

	if (size == 0)
		return (addr);
	index = 0;
	while (index <= size)
	{
		if ((size - index) / 16)
			line_size = 16;
		else
			line_size = size % 16;
		print_line(addr + index, line_size);
		index += 16;
	}
	return (addr);
}

void	print_line(void *addr, unsigned int size)
{
	unsigned int	index;
	unsigned char	*c;

	c = addr;
	print_hex((long int) addr, 16);
	putchar(':', 1);
	putchar(' ', 1);
	index = 0;
	while (index < size)
	{
		print_hex((long int) *(c + index), 2);
		index++;
		if (index < size)
		{
			print_hex((long int) *(c + index), 2);
			index++;
			putchar(' ', 1);
		}
	}
	if (size != 16)
		putchar(' ', (16 - size) * 2 + 8 - (size / 2));
	index = 0;
	while (index++ < size)
		print_char(*(c + index - 1));
	putchar('\n', 1);
}

void	print_hex(long int addr, int size)
{
	if (size == 1)
		putchar("0123456789abcdef"[addr], 1);
	else
	{
		print_hex(addr / 16, size - 1);
		putchar("0123456789abcdef"[addr % 16], 1);
	}
}

void	print_char(unsigned char c)
{
	if (c < 32 || c > 127)
		putchar('.', 1);
	else
		putchar(c, 1);
}

void	putchar(char c, int times)
{
	int	n;

	n = 0;
	while (n < times)
	{
		write(1, &c, 1);
		n++;
	}
}
