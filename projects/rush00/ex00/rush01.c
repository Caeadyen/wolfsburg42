/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:03:50 by hrings            #+#    #+#             */
/*   Updated: 2021/08/08 21:45:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);
static void	print_line(char beginning, char mid, char endings, int length);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{	
		print_line('/', '*', '\\', x);
		y--;
		while (y > 1)
		{
			print_line('*', ' ', '*', x);
			y--;
		}
		if (y > 0)
			print_line('\\', '*', '/', x);
	}
}

static void	print_line(char beginning, char mid, char endings, int length)
{
	if (length > 0)
	{
		ft_putchar(beginning);
		length--;
		while (length > 1)
		{
			ft_putchar(mid);
			length--;
		}
		if (length > 0)
			ft_putchar(endings);
		ft_putchar('\n');
	}
}
