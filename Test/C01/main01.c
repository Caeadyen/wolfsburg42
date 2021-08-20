/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrings <hrings@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:11:59 by hrings            #+#    #+#             */
/*   Updated: 2021/08/12 10:07:27 by hrings           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
		int	*pex01test;
	int	**ppex01test;
	int	***pppex01test;
	int	****ppppex01test;
	int	*****pppppex01test;
	int	******ppppppex01test;
	int	*******pppppppex01test;
	int	********ppppppppex01test;
	int	*********pppppppppex01test;
	int	**********ppppppppppex01test;
	int i2 = 10;
	pex01test = &i2;
	
	ppex01test = &pex01test;
	pppex01test = &ppex01test;
	ppppex01test = &pppex01test;
	pppppex01test = &ppppex01test;
	ppppppex01test = &pppppex01test;
	pppppppex01test = &ppppppex01test;
	ppppppppex01test = &pppppppex01test;
	pppppppppex01test = &ppppppppex01test;
	ppppppppppex01test = &pppppppppex01test;
	printf("before : %i \n", *pex01test);
	ft_ultimate_ft(*ppppppppppex01test);
	printf("after : %i \n", *pex01test);
}