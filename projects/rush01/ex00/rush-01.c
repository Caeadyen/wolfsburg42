/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 08:57:54 by hrings            #+#    #+#             */
/*   Updated: 2021/08/16 12:28:17 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	printgrid(int *grid);
void	putchar(char c);
int		solve(int pos, int *grid, int *views);
int		init(char *input, int *grid, int *views);
void	printerror(void);

int	main(int argc, char *argv[])
{
	int	grid[16];
	int	views[16];

	if (argc == 1 || argc > 2)
	{
		printerror();
		return (0);
	}
	if (!init(argv[1], grid, views))
	{
		printerror();
		return (0);
	}
	if (solve(0, grid, views))
		printgrid(grid);
	else
		printerror();
	return (0);
}

void	printgrid(int *grid)
{
	char	c;
	int		index;

	index = 0;
	while (index < 16)
	{
		c = *(grid + index) + '0';
		putchar(c);
		if (index % 4 != 3)
			putchar(' ');
		else
			putchar('\n');
		index++;
	}
}

void	printerror(void)
{
	putchar('E');
	putchar('r');
	putchar('r');
	putchar('o');
	putchar('r');
	putchar('\n');
}

void	putchar(char c)
{
	write (1, &c, 1);
}
