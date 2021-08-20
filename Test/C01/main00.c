/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:09:14 by hrings            #+#    #+#             */
/*   Updated: 2021/08/12 10:06:42 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ft(int *nbr);

int	main(void)
{
	int	*ex00test;
	int i = 10;

	ex00test = &i;
	printf("before : %i \n", *ex00test);
	ft_ft(ex00test);
	printf("after : %i \n", *ex00test);
}