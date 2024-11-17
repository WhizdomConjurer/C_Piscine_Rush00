/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:21:52 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/17 11:56:47 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw02(int x, char p1, char p2, char p3)
{
	int	x_count;

	x_count = 0;
	while (x_count < x)
	{
		if (x_count == 0)
		{
			ft_putchar(p1);
		}
		else
		{
			if (x_count == x -1)
			{
				ft_putchar(p3);
			}
			else
				ft_putchar(p2);
		}
		x_count++;
	}
	ft_putchar('\n');
}

void	rush02(int x, int y)
{
	int	y_count;

	y_count = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (y_count < y)
	{
		if (y_count == 0)
		{
			ft_draw02(x, 'A', '-', 'A');
		}
		else
		{
			if (y_count == y - 1)
			{
				ft_draw02(x, 'C', '-', 'C');
			}
			else
				ft_draw02(x, 'B', ' ', 'B');
		}
		y_count++;
	}
}
