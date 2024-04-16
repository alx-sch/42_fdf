/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:55:16 by aschenk           #+#    #+#             */
/*   Updated: 2024/04/15 18:03:05 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# define ERR_ARG			"ERROR: Use './fdf map_file.fdf'!\n"
# define ERR_FILE_TYPE		"ERROR: Invalid file format, use '.fdf'!\n"
# define ERR_MLX			"ERROR: MLX\n"
# define ERR_MALLOC			"ERROR: malloc() failed"
# define ERR_GNL			"ERROR: get_next_line() failed"
# define ERR_SPLIT			"ERROR: ft_split() failed"
# define ERR_COLOR			"ERROR: Invalid color code! Use '0xRRGGBB'.\n"
# define ERR_FILE_STRUC		"ERROR: Invalid map structure!\n"
// Inval. structure: empty, non-rectangular, does not end with single empty line

#endif