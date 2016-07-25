/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asteffan <asteffan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 15:26:37 by asteffan          #+#    #+#             */
/*   Updated: 2016/07/25 16:31:56 by asteffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (0);
	else
		return (1);
}

int		ft_count(char c)
{
	int k;

	k = (c - 'a');
	return (k);
}

void	ft_print(char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(argv[1][i])
	{
		if (ft_is_alpha(argv[1][i]))
			write(1, &argv[1][i], 1);
		else
		{
			while (j <= ft_count(argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			j = 0;
		}
		i++;
	}
}
int main(int argc, char **argv)
{

	return 0;
}
