/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:34:56 by aschenk           #+#    #+#             */
/*   Updated: 2024/04/11 19:11:43 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	handle_keypress(int keycode, t_fdf *fdf)
{
	if (keycode == XK_Escape)
	{
		mlx_destroy_window(fdf->mlx_ptr, fdf->win_ptr);
		fdf->win_ptr = NULL;
	}
	return (0);
}

int	handle_no_event(void *fdf)
{
	fdf = 0;
	/* This function needs to exist, but it is useless for the moment */
	return (0);
}