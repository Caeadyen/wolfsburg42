/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:34:47 by hrings            #+#    #+#             */
/*   Updated: 2021/08/10 14:47:00 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);
void	putchar(char c);

int	main(void)
{
	int	test[10];
	int	*p;
	int	index;

	index = 0;
	while (index < 10)
	{
		test[index] = 9 - index;
		putchar(test[index] + '0');
		index++;
	}
	putchar('\n');
	p = test;
	ft_sort_int_tab(p, 10);
	index = 0;
	while (index < 10)
	{
		putchar(test[index] + '0');
		index++;
	}
	putchar('\n');
}

void	putchar(char c)
{
	write(1, &c, 1);
}
