/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:21:50 by hrings            #+#    #+#             */
/*   Updated: 2021/08/12 09:23:20 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strlen(char *str);

int	main(void)
{
	printf("Count String 'Hello, World' , so 12: \n");
	int result = ft_strlen("Hello, World");
	printf("Length %i \n", result);

}