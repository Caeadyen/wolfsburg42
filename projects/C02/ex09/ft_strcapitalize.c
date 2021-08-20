/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 00:01:49 by hrings            #+#    #+#             */
/*   Updated: 2021/08/17 20:28:21 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	str_capitalize(char *str, int is_word);

char	*ft_strcapitalize(char *str)
{
	if (*str == '\0')
		return (str);
	else if (*str >= '0' && *str <= '9')
	{
		str_capitalize(++str, 1);
	}
	else if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
		str_capitalize(++str, 1);
	}
	else if (*str >= 'A' && *str <= 'Z')
	{
		str_capitalize(++str, 1);
	}
	else
	{
		str_capitalize(++str, 0);
	}
	return (--str);
}

void	str_capitalize(char *str, int is_word)
{
	if (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			str_capitalize(++str, 1);
		else if (*str >= 'a' && *str <= 'z')
		{
			if (!is_word)
			{
				*str = *str - 32;
			}
			str_capitalize(++str, 1);
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if (is_word)
			{
				*str = *str + 32;
			}
			str_capitalize(++str, 1);
		}
		else
			str_capitalize(++str, 0);
	}
}
