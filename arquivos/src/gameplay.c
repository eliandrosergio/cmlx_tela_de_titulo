#include "header.h"

void	ativate_hooks( t_game* game ) {
	mlx_key_hook(game->win, key_hook, game);
	mlx_mouse_hook(game->win, mouse_hook, game);
	mlx_hook(game->win, 17, 1L << 17, exit_game, game);
	mlx_loop_hook(game->mlx, render_tela, game);
}
