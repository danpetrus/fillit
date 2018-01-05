/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 20:33:42 by dpetrus           #+#    #+#             */
/*   Updated: 2017/12/23 20:01:46 by rhalatiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			main(int argc, char **argv)
{
	char	*stock;
	int		fd;
	t_tetri	*tetri;

	if (argc != 2)
	{
		ft_putendl("usage [map]");
		return (0);
	}
	if (ft_read(argv[1]) == (-1))
		ft_error();
	fd = open(argv[1], O_RDONLY);
	stock = read_file(fd);
	if (!check_str(stock))
		ft_error();
	close(fd);
	tetri = stock_tetri(stock);
	solve(tetri);
	free(tetri);
	free(stock);
	return (0);
}
