/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:35:40 by hrings            #+#    #+#             */
/*   Updated: 2021/08/09 15:11:52 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	beginning;
	int	ending;
	int	temp;

	beginning = 0;
	ending = size - 1;
	while (beginning < ending)
	{
		temp = tab[beginning];
		tab[beginning] = tab[ending];
		tab[ending] = temp;
		beginning++;
		ending--;
	}
}
