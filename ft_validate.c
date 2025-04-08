/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:57:25 by maeskhai          #+#    #+#             */
/*   Updated: 2025/04/07 15:21:33 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_check(const char *s)
{
	int				i;
	int				sign;
	int				result;

	i = 0;
	result = 0;
	sign = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if ((s[i] == '-' || s[i] == '+') && ft_isdigit(s[i + 1]))
	{
		if (s[i++] == '-')
			sign *= -1;
	}
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i++] - '0');
		}
		else
			return (0);
	}
	return (1);
}

int	ft_validate(char **tab)
{
	int	i;

	if (!tab)
		return (0);
	i = 0;
	while (tab[i])
	{
		if (ft_check(tab[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
