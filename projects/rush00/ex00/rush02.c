/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 11:12:53 by ajenabid          #+#    #+#             */
/*   Updated: 2021/08/07 15:23:23 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);
static void	print_char(char c, int *length);
static void	print_line(char endings, char mid, int length, int *row);

void	rush(int x, int y)
{
	print_line('A', 'B', x, &y);
	while (y > 1)
	{
		print_line('B', ' ', x, &y);
	}
	print_line('C', 'B', x, &y);
}

static void	print_line(char endings, char mid, int length, int *row)
{
	if (*row > 0)
	{
		print_char(endings, &length);
		while (length > 1)
		{
			print_char(mid, &length);
		}
		print_char(endings, &length);
		*row -= 1;
		ft_putchar('\n');
	}	
}

static void	print_char(char c, int *length)
{
	if (*length > 0)
	{
		ft_putchar(c);
		*length -= 1;
	}
}
