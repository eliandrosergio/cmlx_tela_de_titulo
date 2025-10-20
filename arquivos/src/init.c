#include "header.h"

void	init_game( t_game* game ) {
	// tela dados
	game->w_tela = 200;
	game->h_tela = 120;

	// mlx
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, game->w_tela, game->h_tela, "Tela Inicial");

	// cursor
	game->cursor.w_size = 0;
	game->cursor.h_size = 0;
	game->cursor.x_cursor = 15;
	game->cursor.y_cursor = 18;
	game->cursor.pos_cursor = 1;
	game->cursor.img = mlx_xpm_file_to_image(game->mlx, "assets/img/cursor001.xpm", &game->cursor.w_size, &game->cursor.h_size);
}
