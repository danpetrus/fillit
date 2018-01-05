/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 20:33:53 by dpetrus           #+#    #+#             */
/*   Updated: 2017/12/23 19:40:31 by rhalatiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			count_pieces(char *str)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			res++;
		i++;
	}
	return (res / 4);
}

void		set_tetri_list(t_tetri **tmp, char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			(*tmp)->x[j] = i % 5;
			(*tmp)->y[j] = i / 5;
			j++;
		}
		i++;
	}
}

t_tetri		*stock_tetri(char *tetrimino)
{
	int		c_tetri;
	int		extra;
	char	c;
	t_tetri *stock;
	t_tetri *tmp;

	extra = 0;
	c = 'A';
	c_tetri = count_pieces(tetrimino);
	if (!(stock = (t_tetri *)malloc(sizeof(t_tetri))))
		return (NULL);
	tmp = stock;
	while (c_tetri > 0)
	{
		tmp->c = c;
		set_tetri_list(&tmp, ft_strsub(tetrimino, 0 + extra, 20));
		if (!(tmp->next = (t_tetri *)malloc(sizeof(t_tetri))))
			return (NULL);
		tmp = tmp->next;
		c_tetri--;
		c++;
		extra += 21;
	}
	tmp->next = NULL;
	return (stock);
}

char		*read_file(int fd)
{
	int		f;
	int		i;
	char	c;
	char	*tetrimino;

	i = 0;
	tetrimino = NULL;
	f = read(fd, &c, 1);
	if (f < 0)
		return (NULL);
	if (f == 1)
	{
		tetrimino = (char *)malloc(sizeof(char) * 545);
		while (f != '\0')
		{
			tetrimino[i] = c;
			i++;
			f = read(fd, &c, 1);
		}
		tetrimino[i] = '\0';
	}
	return (tetrimino);
}
