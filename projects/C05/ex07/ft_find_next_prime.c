/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:51:51 by hrings            #+#    #+#             */
/*   Updated: 2021/08/19 10:58:29 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else if (is_prime(nb))
		return (nb);
	else if (nb % 2 == 0)
	{
		nb++;
		while (!is_prime(nb))
			nb += 2;
		return (nb);
	}
	else
	{
		nb += 2;
		while (!is_prime(nb))
			nb += 2;
		return (nb);
	}
}

int	is_prime(int nb)
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
