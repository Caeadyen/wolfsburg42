/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:37:09 by hrings            #+#    #+#             */
/*   Updated: 2021/08/19 14:16:17 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	putchar(char c);

int	main(int argc, char **argv)
{
	int	index;

	index = 0;
	while (argv[0][index] != '\0' && argc)
	{
		putchar(argv[0][index]);
		index++;
	}
	putchar('\n');
}

void	putchar(char c)
{
	write(1, &c, 1);
}
