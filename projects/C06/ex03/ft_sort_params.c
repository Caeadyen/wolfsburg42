/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:29:25 by hrings            #+#    #+#             */
/*   Updated: 2021/08/19 14:58:08 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	sort_array(char **array, int size);

int	main(int argc, char **argv)
{
	int	index;
	int	index_para;

	index = 1;
	if (argc > 1)
	{
		sort_array(argv, argc);
		while (index < argc)
		{
			index_para = 0;
			while (argv[index][index_para] != '\0')
			{
				putchar(argv[index][index_para]);
				index_para++;
			}
			putchar('\n');
			index++;
		}
	}
}

void	sort_array(char **array, int size)
{
	int		index;
	int		unsorted;
	char	*temp;

	unsorted = 1;
	while (unsorted == 1)
	{
		unsorted = 0;
		index = 1;
		while (index < size - 1)
		{
			if (ft_strcmp(array[index], array[index + 1]) > 0)
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
				unsorted = 1;
			}
			index++;
		}
		size--;
	}	
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

void	putchar(char c)
{
	write(1, &c, 1);
}
