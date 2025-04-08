/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_nbrs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:23:50 by maeskhai          #+#    #+#             */
/*   Updated: 2025/04/07 16:16:30 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_dup_nbrs(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		tmp = arr[i];
		while (j < size)
		{
			if (tmp == arr[j])
			{
				free(arr);
				ft_pr_error("Error\n", NULL);
			}
			j++;
		}
		i++;
	}
}
