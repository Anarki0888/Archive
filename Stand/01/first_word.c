/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asteffan <asteffan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 17:04:01 by asteffan          #+#    #+#             */
/*   Updated: 2016/07/26 21:25:54 by asteffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_word(char **argv, int i)
{
	while (argv[1][i] != ' ' && argv[1][i])
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char	c;
	int		ok;
	int		i;

	c = '\n';
	if (argc != 2)
	{
		ft_putchar(c);
		return (0);
	}
	else if (argc == 2)
	{
		i = 0;
		ok = 0;
		while (argv[1][i] && ok == 0)
		{
			if (argv[1][i] != ' ')
				ok = ft_check_word(argv, i);
			i++;
		}
	}
	ft_putchar(c);
	return (0);
}
