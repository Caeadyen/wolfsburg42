/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:34:04 by hrings            #+#    #+#             */
/*   Updated: 2021/08/19 11:20:18 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	numberp;
	int	numberpp;
	int	numberc;
	int	current_index;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	numberp = 0;
	numberpp = 0;
	numberc = 1;
	current_index = 1;
	while (current_index < index)
	{
		numberpp = numberp;
		numberp = numberc;
		numberc = numberp + numberpp;
		current_index++;
	}
	return (numberc);
}
