/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asteffan <asteffan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 12:53:19 by asteffan          #+#    #+#             */
/*   Updated: 2016/07/21 22:39:34 by asteffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

int		main(int argc, char const *argv[])
{
	int		stand;
	int		nb;
	char	str[5000];

	if(argc == 1)
		return (write(2, "File name missing.\n", 19));
	if(argc > 2)
		return (write(2, "Too many argument.\n", 19));
	if(argc == -1)
		return (1);
	stand = open(argv[1], O_RDONLY);
	nb = read(stand, str, 4056);
	while ()
	{

	}
	str[nb] = '\0';
	write(1, str, nb);
	close(stand);
	return (0);
}
