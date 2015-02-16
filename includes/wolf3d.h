/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 17:35:34 by etheodor          #+#    #+#             */
/*   Updated: 2015/02/16 13:43:30 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H
# define DEFAUT_X		320
# define DEFAUT_Y		200
# define WHITE			0xFFFFFF
# define ORANGE			0xCCC400
# define BLUE			0x32AAFF
# define GREEN			0x107800
# include "mlx.h"
# include "keyh.h"
# include <stdlib.h>
# include <unistd.h>
#include <fcntl.h>
# include "libft.h"

typedef struct	s_env
{
	void		*mlx;
	void		*win;
	char		*pimg;
	void		*img;
	int			bpp;
	int			endian;
	int			size_line;
	int			**map;
}				t_env;

void	ft_close(int fd);
void	ft_mallerr(void);
int		key_hook(int keycode, t_env *e);
int		ft_update_img(t_env *e);
void	ft_wolf(t_env *e);
void	ft_put_pixel_to_image(t_env *e, int x, int y, int color);
int		expose_hook(t_env *e);
void	ft_init_map(t_env *e);

#endif
