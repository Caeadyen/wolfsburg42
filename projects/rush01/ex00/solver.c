/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 09:20:44 by hrings            #+#    #+#             */
/*   Updated: 2021/08/16 14:06:12 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int pos, int *grid, int *views);
int	check_double_number(int pos, int *grid);

int	solve(int pos, int *grid, int *views)
{
	int	current_add;

	if (pos == 16)
		return (1);
	current_add = 1;
	while (current_add <= 4)
	{		
		*(grid + pos) = current_add;
		if (check_double_number(pos, grid)
			&& check(pos, grid, views))
		{
			if (solve((pos + 1), grid, views))
				return (1);
		}
		*(grid + pos) = 0;
		current_add++;
	}
	return (0);
}

int	check_double_number(int pos, int *grid)
{
	int	row;
	int	columm;
	int	index;

	row = pos / 4;
	columm = pos % 4;
	index = 0;
	while (index < 4)
	{
		if (grid[pos] == grid[row * 4 + index] && pos != row * 4 + index)
			return (0);
		if (grid[pos] == grid[4 * index + columm] && pos != 4 * index + columm)
			return (0);
		index++;
	}
	return (1);
}
