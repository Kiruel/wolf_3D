/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 13:18:39 by etheodor          #+#    #+#             */
/*   Updated: 2015/02/16 14:04:56 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	ft_init_map(t_env *e)
{
	int i;
	int j;

	i = 0;
	e->map = (int**)ft_memalloc(sizeof(int*) * 10);
	while (i < 10)
	{
		e->map[i] = (int*)ft_memalloc(sizeof(int) * 10);
		i++;
	}
	i = 0;
	while (i < 10)
	{
		e->map[i][0] = 1;
		e->map[0][i] = 1;
		i++;
	}
	j = 0;
	while (j < 10)
	{
		e->map[9][j] = 1;
		e->map[j][9] = 1;
		j++;
	}
}
