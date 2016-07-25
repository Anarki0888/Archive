/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asteffan <asteffan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 19:44:53 by asteffan          #+#    #+#             */
/*   Updated: 2016/07/13 21:45:14 by asteffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_atoi(char *str)
{
	int result;
	int len;
	int negative;

	result = 0;
	len = 0;
	negative = 0;
	if (*str == '\0')
		return (0);
	while ((str[len] == ' ') || ((str[len] > 7) && (str[len] < 14)))
		len++;
	if (str[len] == '-')
		negative = 1;
	if (str[len] == '-' || str[len] == '+')
		len++;
	while ((str[len] >= '0') && (str[len] <= '9') && (str[len] != '\0'))
	{
		result = result * 10 + (str[len] - '0');
		len++;
	}
	if (negative == 1)
		result = result * -1;
	return (result);
}
