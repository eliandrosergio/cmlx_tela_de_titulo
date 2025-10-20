#include "header.h"

int		main( void ) {
	t_game	game;

	init_game(&game);
	render_tela(&game);
	ativate_hooks(&game);
	mlx_loop(game.mlx);
	return (0);
}
