/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asteffan <asteffan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 15:44:02 by asteffan          #+#    #+#             */
/*   Updated: 2016/07/26 16:05:08 by asteffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *s)
{
	char	c;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			c = *s - 32;
		else if (*s >= 'A' && *s <= 'Z')
			c = *s + 32;
		else
			c = *s;
		write(1, &c, 1);
		s++;
	}
}

int		main(int argc, char const **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
