/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:41:05 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/05/04 22:05:34 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define GRID_SIZE 4

//A function to print character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//A function to print string
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
	}
}

//A function to print number
void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putcar('-');
		n = -n;

	if (n >= 10)
		ft_putnbr(n / 10);

	ft_putchar(n % 10 + '0');
}

//A fucntion to display the 2d grid of the skyscraper
void	displayGrid(int grid[GRID_SIZE][GRID_SIZE])
{
	int i;
	int p;

	i = 0;
	p = 0;
	while (i < GRID_SIZE)
	{
		while (p < GRID_SIZE)
		{
			ft_putnbr(grid[i][p]);
			
		}
	}
}
