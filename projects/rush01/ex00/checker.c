/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 09:24:51 by hrings            #+#    #+#             */
/*   Updated: 2021/08/16 14:06:01 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_from_left(int pos, int *grid, int *views);
int	check_row_from_right(int pos, int *grid, int *views);
int	check_columm_from_up(int pos, int *grid, int *views);
int	check_columm_from_down(int pos, int *grid, int *views);

int	check(int pos, int *grid, int *views)
{
	if (check_row_from_left(pos, grid, views)
		&& check_row_from_right(pos, grid, views)
		&& check_columm_from_up(pos, grid, views)
		&& check_columm_from_down(pos, grid, views))
		return (1);
	return (0);
}

int	check_row_from_left(int pos, int *grid, int *views)
{
	int	row;
	int	index;
	int	boxes_saw;
	int	max;

	row = pos / 4;
	index = 0;
	boxes_saw = 0;
	max = 0;
	while (index < 4)
	{
		if (grid[row * 4 + index] > max)
		{
			max = grid[row * 4 + index];
			boxes_saw++;
		}
		index++;
	}
	if ((pos % 4) == 3 && boxes_saw == views[8 + row])
		return (1);
	else if ((pos % 4) != 3 && boxes_saw <= views[8 + row])
		return (1);
	else
		return (0);
}

int	check_row_from_right(int pos, int *grid, int *views)
{
	int	row;
	int	index;
	int	boxes_saw;
	int	max;

	row = pos / 4;
	index = 3;
	boxes_saw = 0;
	max = 0;
	while (index >= 0)
	{
		if (grid[row * 4 + index] > max)
		{
			max = grid[row * 4 + index];
			boxes_saw++;
		}
		index--;
	}
	if ((pos % 4) == 3 && boxes_saw == views[12 + row])
		return (1);
	else if ((pos % 4) != 3)
		return (1);
	else
		return (0);
}

int	check_columm_from_up(int pos, int *grid, int *views)
{
	int	columm;
	int	index;
	int	boxes_saw;
	int	max;

	columm = pos % 4;
	index = 0;
	boxes_saw = 0;
	max = 0;
	while (index < 4)
	{
		if (grid[index * 4 + columm] > max)
		{
			max = grid[index * 4 + columm];
			boxes_saw++;
		}
		index++;
	}
	if ((pos / 4) == 3 && boxes_saw == views[columm])
		return (1);
	else if ((pos / 4) != 3 && boxes_saw <= views[columm])
		return (1);
	else
		return (0);
}

int	check_columm_from_down(int pos, int *grid, int *views)
{
	int	columm;
	int	index;
	int	boxes_saw;
	int	max;

	columm = pos % 4;
	index = 3;
	boxes_saw = 0;
	max = 0;
	while (index >= 0)
	{
		if (grid[index * 4 + columm] > max)
		{
			max = grid[index * 4 + columm];
			boxes_saw++;
		}
		index--;
	}
	if ((pos / 4) == 3 && boxes_saw == views[4 + columm])
		return (1);
	else if ((pos / 4) != 3)
		return (1);
	else
		return (0);
}
