/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_tools.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 09:44:33 by etheodor          #+#    #+#             */
/*   Updated: 2015/02/16 13:43:39 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	ft_put_pixel_to_image(t_env *e, int x, int y, int color)
{
	int i;

	i = x * 4 + y * e->size_line;
	e->pimg[i] = (color & 0xFF);
	e->pimg[i + 1] = (color & 0xFF00) >> 8;
	e->pimg[i + 2] = (color & 0xFF0000) >> 16;
}

int		ft_update_img(t_env *e)
{
	e->img = mlx_new_image(e->mlx, DEFAUT_X, DEFAUT_Y);
	e->pimg = mlx_get_data_addr(e->img, &(e->bpp),
			&(e->size_line), &(e->endian));
	ft_wolf(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
	mlx_destroy_image(e->mlx, e->img);
	return (0);
}
