/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 22:41:19 by hrings            #+#    #+#             */
/*   Updated: 2021/08/07 09:58:11 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_line_with_corners(int x);
void	print_line_without_corners(int y, int x);

void	rush(int x, int y)
{
	if (y >= 1 && x >= 1)
	{
		print_line_with_corners(x);
		if (y >= 3)
		{
			print_line_without_corners(x, y);
		}
		if (y >= 2)
		{
			print_line_with_corners(x);
		}
	}
}

void	print_line_with_corners(int x)
{
	int	index;

	index = x;
	ft_putchar('A');
	while (index > 2)
	{
		ft_putchar('B');
		index--;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	print_line_without_corners(int x, int y)
{
	int	index;

	while (y > 2)
	{
		ft_putchar('B');
		index = x;
		while (index > 2)
		{
			ft_putchar(' ');
			index--;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		y--;
	}
}
