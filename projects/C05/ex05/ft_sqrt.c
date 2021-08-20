/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:07:20 by hrings            #+#    #+#             */
/*   Updated: 2021/08/19 10:22:26 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	test;

	if (nb <= 0)
		return (0);
	result = 0;
	test = 1;
	while (test * test < nb && test <= 46340)
		test++;
	if (test * test == nb)
		return (test);
	else
		return (0);
}
