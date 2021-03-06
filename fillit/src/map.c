/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 20:33:47 by dpetrus           #+#    #+#             */
/*   Updated: 2017/12/20 20:33:48 by dpetrus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**tetri_map_new(char **map, int size)
{
	int x;
	int y;

	y = 0;
	if (!(map = (char **)malloc(sizeof(char *) * size + 1)))
		return (NULL);
	while (y < size)
	{
		if (!(map[y] = (char *)malloc(sizeof(char) * size + 1)))
			return (NULL);
		x = 0;
		while (x < size)
		{
			map[y][x] = '.';
			x++;
		}
		map[y][x] = '\0';
		y++;
	}
	map[y] = 0;
	return (map);
}

void	print_map(char **map)
{
	int i;

	if (map == NULL)
	{
		ft_putendl("error");
		return ;
	}
	i = 0;
	while (map[i] != 0)
	{
		ft_putendl(map[i]);
		i++;
	}
}

char	**remove_tetri(char **map, t_tetri *tetri, int size)
{
	int x;
	int y;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (map[y][x] == tetri->c)
				map[y][x] = '.';
			x++;
		}
		y++;
	}
	return (map);
}

char	**insert_tetri(char **map, t_tetri *tetri, int size)
{
	int x;
	int y;
	int i;

	i = 0;
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (tetri->y[i] == y && tetri->x[i] == x)
			{
				map[y][x] = tetri->c;
				i++;
			}
			x++;
		}
		y++;
	}
	return (map);
}
