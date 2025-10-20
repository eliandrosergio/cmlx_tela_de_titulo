#ifndef HEADER_H
#define HEADER_H

// sys include's
# include <stdio.h>
# include <stdlib.h>

// my include's
# include "mlx.h"
# include "Game.h"

// Key code's
# define KEY_ESC 65307
# define KEY_Q 113
# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100
# define KEY_UP 65362
# define KEY_LEFT 65361
# define KEY_DOWN 65364
# define KEY_RIGHT 65363

// Mouse code's
# define MOUSE_LEFT 1
# define MOUSE_RIGHT 2
# define MOUSE_MID 3
# define MOUSE_UP 4
# define MOUSE_DOWN 5

// exit.c
int		exit_game( t_game* game );

// gameplay.c
void	ativate_hooks( t_game* game );

// init.c
void	init_game( t_game* game );

// input.c
int		key_hook( int keycode, t_game *game );
int		mouse_hook( int mousecode, t_game *game );

// render.c
int		render_tela( t_game* game );

#endif
