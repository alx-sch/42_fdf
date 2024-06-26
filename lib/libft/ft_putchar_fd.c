/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:17:57 by aschenk           #+#    #+#             */
/*   Updated: 2024/04/12 17:30:17 by aschenk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
c: The character to output.
fd: The file descriptor on which to write.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	char	test_str[] = "Print me!";
	char	*ptr = test_str;

	while (*ptr)
	{
		ft_putchar_fd(*ptr, 1);
		ptr++;
	}
	ft_putchar_fd('\n', 1);

	return (0);
}
*/
