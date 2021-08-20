/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:23:30 by hrings            #+#    #+#             */
/*   Updated: 2021/08/12 09:24:48 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int test[10] = {0,1,2,3,4,5,6,7,8,9};
	printf("Reverse array: 0123456789 \n");
	ft_rev_int_tab(test,10);
	for(int loop = 0; loop<10;loop++)
	{
		printf("%i", test[loop]);
	}
	printf("\n");
}