/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:33:19 by hrings            #+#    #+#             */
/*   Updated: 2021/08/10 14:49:46 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	unsorted;

	unsorted = 1;
	while (unsorted == 1)
	{
		unsorted = 0;
		index = 0;
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				swap(&tab[index], &tab[index + 1]);
				unsorted = 1;
			}
			index++;
		}
		size--;
	}	
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
