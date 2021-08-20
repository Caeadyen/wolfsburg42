/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:18:34 by hrings            #+#    #+#             */
/*   Updated: 2021/08/12 09:19:43 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 20;
	int b = 6;
	printf("a before: %i \n", a);
	printf("b before: %i \n", b);
	ft_ultimate_div_mod(&a,&b);
	printf("a after: %i \n", a);
	printf("b after: %i \n", b);
}