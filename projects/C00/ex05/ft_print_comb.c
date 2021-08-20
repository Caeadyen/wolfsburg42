/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:08:29 by hrings            #+#    #+#             */
/*   Updated: 2021/08/05 14:36:15 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int a, int b, int c );
void	write_seperator(void);
void	put_char(char c);

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				write_number(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					write_seperator();
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	write_number(int a, int b, int c)
{
	put_char(a + '0');
	put_char(b + '0');
	put_char(c + '0');
}

void	write_seperator(void)
{
	put_char(',');
	put_char(' ');
}

void	put_char(char c)
{
	write(1, &c, 1);
}
