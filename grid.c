/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:41:05 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/05 18:08:16 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define GRID_SIZE 4

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
	}
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putcar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void	display_grid(int grid[GRID_SIZE][GRID_SIZE])
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (i < GRID_SIZE)
	{
		while (p < GRID_SIZE)
		{
			ft_putnbr(grid[i][p]);
			ft_putchar(' ');
			p++;
		}
		ft_putchar('\n');
		i++;
	}
}
