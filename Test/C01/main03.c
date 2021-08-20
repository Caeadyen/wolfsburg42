/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:16:58 by hrings            #+#    #+#             */
/*   Updated: 2021/08/12 09:17:58 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int div;
	int mod;
	int a = 20;
	int b = 6;
	
	ft_div_mod(a,b,&div,&mod);
	printf("div: %i \n", div);
	printf("mod: %i \n", mod);
}