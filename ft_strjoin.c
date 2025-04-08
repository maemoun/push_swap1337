/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:37:08 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 16:10:23 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	check_only_tabs_spaces(char **av, char *str)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	while (av[i])
	{
		j = 0;
		flag = 1;
		while (av[i][j] != '\0')
		{
			if (av[i][j] != ' ' && av[i][j] != '\t')
			{
				flag = 0;
				break ;
			}
			j++;
		}
		if (flag == 1)
			ft_pr_error("Error\n", str);
		i++;
	}
}

void	ft_join(char **av, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 0;
	while (av[i])
	{
		if (av[i][0] == '\0')
			ft_pr_error("Error\n", str);
		str[k] = av[i][j];
		j++;
		k++;
		if (av[i][j] == '\0')
		{
			str[k] = ' ';
			k++;
			i++;
			j = 0;
		}
	}
	str[k] = '\0';
}

char	*ft_strjoin(int ac, char **av)
{
	int		i;
	int		len;
	char	*str;

	i = 1;
	len = 0;
	while (i < ac)
	{
		len += ft_strlen(av[i]);
		len++;
		i++;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	check_only_tabs_spaces(av, str);
	ft_join(av, str);
	return (str);
}
