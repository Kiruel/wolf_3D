/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/16 12:36:11 by etheodor          #+#    #+#             */
/*   Updated: 2015/02/16 14:11:20 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

int		key_hook(int keycode, t_env *e)
{
	if (keycode == KEY_ECHAP)
	{
		mlx_destroy_window(e->mlx, e->win);
		free(e);
		exit(0);
	}
	expose_hook(e);
	return (0);
}
