/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:15:17 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/20 08:09:44 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_atoi(const char *str)
{
	int	x;

	x = 0;
	while (*str)
	{
		if (*str == '-')
		{
			return (-1);
		}
		else if ('0' > *str || *str > '9')
		{
			return (-1);
		}
		x = (x * 10) + (*str - '0');
		str++;
	}
	return (x);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write(1, "Usage: give two Integer as arguments", 37);
		return (1);
	}
	if (argv[1] < 0 || argv[2] < 0)
	{
		write(1, "Please only use positive integers", 34);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush(x, y);
	return (0);
}
