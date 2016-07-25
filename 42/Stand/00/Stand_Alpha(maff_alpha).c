/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stand_Alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asteffan <asteffan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 00:46:35 by asteffan          #+#    #+#             */
/*   Updated: 2016/07/24 14:41:24 by asteffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	write(1,"aBcDeFgHiJkLmNoPqRsTuVwXyZ\n" , 27);
	(void)argc;
	(void)argv;
	return(0);
}
