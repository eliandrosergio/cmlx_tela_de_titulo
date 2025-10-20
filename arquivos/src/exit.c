#include "header.h"

int		exit_game( t_game* game ) {
	mlx_destroy_image(game->mlx, game->cursor.img);
	mlx_destroy_window(game->mlx, game->win);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
	exit(0);
	return (0);
}
