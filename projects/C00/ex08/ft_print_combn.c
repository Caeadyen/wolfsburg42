/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 20:01:16 by hrings            #+#    #+#             */
/*   Updated: 2021/08/09 23:15:17 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printcharn(char c);
void	print_number(int nb, int size);
void	find_numbers(int start, int output, int n, int size);

void	ft_print_combn(int n)
{
	int	numb;

	if (n == 1)
	{
		numb = 0;
		while (numb <= 9)
		{
			print_number(numb, 1);
			if (numb < 9)
			{
				printcharn(',');
				printcharn(' ');
			}
			numb++;
		}
	}
	else
	{
		numb = 0;
		while (numb <= 10 - n)
		{
			find_numbers(numb, numb, n, n);
			numb++;
		}
	}
}

void	find_numbers(int start, int output, int n, int size)
{
	int	new_output;

	if (n == 1)
	{
		print_number(output, size);
		printcharn(' ');
	}
	else
	{
		while (start < 9)
		{
			start++;
			new_output = (output * 10) + start;
			find_numbers(start, new_output, n - 1, size);
		}	
	}
}

void	printcharn(char c)
{
	write(1, &c, 1);
}

void	print_number(int nb, int size)
{
	if (size == 1)
	{
		printcharn(nb + '0');
	}
	else
	{
		print_number(nb / 10, size - 1);
		printcharn(nb % 10 + '0');
	}
}
