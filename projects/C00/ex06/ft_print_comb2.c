/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:00:46 by hrings            #+#    #+#             */
/*   Updated: 2021/08/05 14:36:34 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_2_dig_combo(int a, int b);
void	write_2_numbers(int a, int b);
void	putchar_2(char c);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 9)
	{
		while (b < 9)
		{
			print_2_dig_combo(a, b);
			b++;
		}
		a++;
		b = 0;
	}
}

void	print_2_dig_combo(int a, int b)
{
	int	c;
	int	d;

	c = a;
	d = b + 1;
	while (c <= 9)
	{
		while (d <= 9)
		{
			write_2_numbers(a, b);
			putchar_2(' ');
			write_2_numbers(c, d);
			if (a != 9 | b != 8 | c != 9 | d != 9)
			{
				putchar_2(',');
				putchar_2(' ');
			}
			d++;
		}
		d = 0;
		c++;
	}
}

void	write_2_numbers(int a, int b)
{
	putchar_2(a + '0');
	putchar_2(b + '0');
}

void	putchar_2(char c)
{
	write(1, &c, 1);
}
