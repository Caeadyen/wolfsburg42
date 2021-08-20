/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:26:00 by hrings            #+#    #+#             */
/*   Updated: 2021/08/19 10:49:50 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	test;

	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb == 3 || nb == 5 || nb % 2 == 0)
		return (0);
	test = 3;
	while (test <= nb / test)
	{
		if (nb % test == 0)
			return (0);
		test += 2;
	}
	return (1);
}
