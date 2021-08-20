/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:41:06 by hrings            #+#    #+#             */
/*   Updated: 2021/08/18 13:44:37 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
