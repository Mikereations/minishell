/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:01:33 by szhakypo          #+#    #+#             */
/*   Updated: 2022/11/11 21:32:22 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	ft_n_compere(char *flag)
{
	int	i;

	i = 0;
	if (flag != NULL)
	{
		if (flag[i] != '-')
			return (1);
		i++;
		while (flag[i])
		{
			if (flag[i] != 'n')
				return (1);
			i++;
		}
		return (0);
	}
	return (1);
}

void	ft_echo(char **argv)
{
	int	n;
	int	i;

	n = 0;
	i = 1;
	while (ft_n_compere(argv[i]) == 0)
	{
		n++;
		i++;
	}
	while (argv[i] && argv)
	{
		ft_printf("%s", argv[i]);
		i++;
		if (argv[i])
			ft_printf(" ");
	}
	if (n == 0)
		ft_printf("\n");
}
