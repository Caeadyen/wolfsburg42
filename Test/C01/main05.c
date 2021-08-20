/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:20:09 by hrings            #+#    #+#             */
/*   Updated: 2021/08/12 13:56:01 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_putstr(char *str);

int main(void)
{
	printf("Print String 'Hello, World': \n");
	ft_putstr("Hello, World");
	printf(":End");
	printf("\n");
}