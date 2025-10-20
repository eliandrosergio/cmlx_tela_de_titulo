#ifndef GAME_H
#define GAME_H

#include "header.h"

typedef struct	s_cursor {
	void*	img;
	int		w_size;
	int		h_size;
	int		x_cursor;
	int		y_cursor;
	int		pos_cursor;
}		t_cursor;

typedef struct	s_game {
	void		*mlx;
	void		*win;
	int			w_tela;
	int			h_tela;
	t_cursor	cursor;
}		t_game;

#endif
