/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpetrus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 20:33:33 by dpetrus           #+#    #+#             */
/*   Updated: 2017/12/23 19:47:10 by rhalatiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../includes/libft/libft.h"
# include <fcntl.h>
# include <unistd.h>

typedef struct		s_tetri
{
	char			c;
	int				x[4];
	int				y[4];
	struct s_tetri	*next;
}					t_tetri;

int					ft_error();
int					ft_read(char *file);
int					ft_length(char *file);
int					count_pieces(char *str);
void				set_tetri_list(t_tetri **tmp, char *str);
t_tetri				*stock_tetri(char *tetrimino);
char				*read_file(int fd);
void				xy_tetri(t_tetri **tetri, int x, int y);
char				**algo(char **tetri_map, t_tetri *tetri, int size);
void				solve(t_tetri *tetri);
char				**tetri_map_new(char **map, int size);
char				**tetri_map_dot(char **map, int size);
void				print_map(char **map);
char				**remove_tetri(char **map, t_tetri *tetri, int size);
char				**insert_tetri(char **map, t_tetri *tetri, int size);
int					check_link(char *stock, int j);
int					count_valid_char(char *stock, int j);
int					check_str(char *stock);
int					check_tetri(char **map, t_tetri *tetri, int size);

#endif
