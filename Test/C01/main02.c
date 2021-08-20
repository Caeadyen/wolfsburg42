/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:14:53 by hrings            #+#    #+#             */
/*   Updated: 2021/08/12 09:16:27 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 6;
	int b = 20;

	printf("before swap: \n");
	printf("a: %i \n", a);
	printf("b: %i \n", b);
	ft_swap(&a,&b);
	printf("after swap: \n");
	printf("a: %i \n", a);
	printf("b: %i \n", b);
}