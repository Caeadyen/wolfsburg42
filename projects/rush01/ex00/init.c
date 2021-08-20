/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:06:40 by hrings            #+#    #+#             */
/*   Updated: 2021/08/14 14:56:22 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		init_views(char *input, int *views);
void	init_grid(int *grid);

int	init(char *input, int *grid, int *views)
{
	init_grid(grid);
	if (init_views(input, views))
	{
		return (1);
	}
	return (0);
}

int	init_views(char *input, int *views)
{
	int	index;

	index = 0;
	while (index <= 15)
	{
		if (*input < '1' || *input > '4' || *input == '\0')
			return (0);
		views[index] = *input - '0';
		input++;
		if (index < 15)
		{
			if (*input != ' ' || *input == '\0')
				return (0);
		}
		else
		{
			if (*input != '\0')
				return (0);
		}
		input++;
		index++;
	}
	return (1);
}

void	init_grid(int *grid)
{
	int	index;

	index = 0;
	while (index < 16)
	{
		*(grid + index) = 0;
		index++;
	}
}
