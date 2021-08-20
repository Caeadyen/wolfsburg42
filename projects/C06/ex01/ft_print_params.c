/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 14:20:05 by hrings            #+#    #+#             */
/*   Updated: 2021/08/19 14:23:38 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	putchar(char c);

int	main(int argc, char **argv)
{
	int	index;
	int	index_para;

	index = 1;
	if (argc > 1)
	{
		while (index < argc)
		{
			index_para = 0;
			while (argv[index][index_para] != '\0' && argc)
			{
				putchar(argv[index][index_para]);
				index_para++;
			}
			putchar('\n');
			index++;
		}
	}
}

void	putchar(char c)
{
	write(1, &c, 1);
}
