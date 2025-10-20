#include "header.h"

void	img_draw( t_game *game, void *image, int x, int y ) {
	mlx_put_image_to_window(game->mlx, game->win, image, x, y);
}

void	display_title( t_game* game ) {
	char*	newGame = "Novo Jogo";
	char*	continueGame = "Continuar Jogo Salvo";
	char*	optionGame = "Entrar em Opcoes";
	char*	exitGame = "Sair do Jogo";

	mlx_string_put(game->mlx, game->win, 40, 30, 0xFFFFFF, newGame);
	mlx_string_put(game->mlx, game->win, 40, 50, 0xFFFFFF, continueGame);
	mlx_string_put(game->mlx, game->win, 40, 70, 0xFFFFFF, optionGame);
	mlx_string_put(game->mlx, game->win, 40, 90, 0xFFFFFF, exitGame);
}

void	display_cursor( t_game* game ) {
	if (game->cursor.pos_cursor == 1)
		game->cursor.y_cursor = 18;
	else if (game->cursor.pos_cursor == 2)
		game->cursor.y_cursor = 38;
	else if (game->cursor.pos_cursor == 3)
		game->cursor.y_cursor = 58;
	else if (game->cursor.pos_cursor == 4)
		game->cursor.y_cursor = 78;
	img_draw(game, game->cursor.img, game->cursor.x_cursor, game->cursor.y_cursor);
}

int		render_tela( t_game* game ) {
	mlx_clear_window(game->mlx, game->win);
	display_title(game);
	display_cursor(game);
	return (0);
}
