/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asteffan <asteffan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 20:35:13 by asteffan          #+#    #+#             */
/*   Updated: 2016/07/28 20:42:39 by asteffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *argv, char *argv2, char *argv3)
{
	int i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] == *argv2)
		{
			argv[i] = *argv3;
		}
		ft_putchar(argv[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 4)
	{
		search_and_replace(argv[1], argv[2], argv[3]);
		ft_putchar('\n');
	}
	return (0);
}
