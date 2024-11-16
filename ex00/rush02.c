/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:21:52 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/16 22:13:50 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_draw02(int x, char p1, char p2, char p3)
{
	int	x_2;

	x_2 = 0;
	while (x_2 < x)
	{
		if (x_2 == 0)
		{
			ft_putchar(p1);
		}
		else
		{
			if (x_2 == x -1)
			{
				ft_putchar(p3);
			}
			else
				ft_putchar(p2);
		}
		x_2++;
	}
	ft_putchar('\n');
}

void	rush02(int x, int y)
{
	int	y_2;

	y_2 = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (y_2 < y)
	{
		if (y_2 == 0)
		{
			ft_draw02(x, 'A', '-', 'A');
		}
		else
		{
			if (y_2 == y - 1)
			{
				ft_draw02(x, 'C', '-', 'C');
			}
			else
				ft_draw02(x, 'B', ' ', 'B');
		}
		y_2++;
	}
}
