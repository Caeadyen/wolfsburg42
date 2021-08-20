/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:45:42 by hrings            #+#    #+#             */
/*   Updated: 2021/08/17 13:21:32 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	search_index;
	int	found_index;

	if (*to_find == '\0')
		return (str);
	search_index = 0;
	while (str[search_index] != '\0')
	{
		found_index = 0;
		while (str[search_index + found_index] == to_find[found_index])
		{
			if (to_find[found_index + 1] == '\0')
				return (str + search_index);
			found_index++;
		}
		search_index++;
	}
	return (0);
}
