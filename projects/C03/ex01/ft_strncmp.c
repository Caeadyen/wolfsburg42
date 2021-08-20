/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:37:24 by hrings            #+#    #+#             */
/*   Updated: 2021/08/17 09:40:23 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (n > 0)
	{
		if (s1[index] == '\0' || s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
		n--;
	}
	return (0);
}
