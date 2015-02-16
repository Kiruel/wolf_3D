/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 17:40:39 by etheodor          #+#    #+#             */
/*   Updated: 2015/02/16 14:05:38 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		expose_hook(t_env *e)
{
	ft_update_img(e);
	return (0);
}

void	ft_wolf(t_env *e)
{
	(void)e;
/*	int x;
	int y;

	x = 0;
	while (x < 100)
	{
		y = 0;
		while (y < 100)
		{
			ft_put_pixel_to_image(e, x, y, WHITE);
			y++;
		}
		x++;
	}*/
}

int		main(int ac, char **av)
{
	t_env	*e;

	(void)ac;
	(void)av;
	if ((e = (t_env*)ft_memalloc(sizeof(t_env))) == NULL)
		ft_mallerr();
	e->mlx = mlx_init();
	e->win = mlx_new_window(e->mlx, DEFAUT_X, DEFAUT_Y, "wolf3d");
	ft_init_map(e);
	mlx_hook(e->win, 2, 3, key_hook, e);
	mlx_expose_hook(e->win, expose_hook, e);
	mlx_loop(e->mlx);
	return (0);
}
