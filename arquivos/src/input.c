#include "header.h"

int	key_hook( int keycode, t_game *game ) {
	if (keycode == KEY_ESC || keycode == KEY_Q)
		exit_game(game);
	if ((keycode == KEY_W || keycode == KEY_UP) && game->cursor.pos_cursor > 1)
		game->cursor.pos_cursor--;
	if ((keycode == KEY_S || keycode == KEY_DOWN) && game->cursor.pos_cursor < 4)
		game->cursor.pos_cursor++;
	printf("[KeyboardLog]: %d\n", keycode);
	return (0);
}

int		mouse_hook( int mousecode, t_game *game ) {
	char	*str1, *str2 = "movido";

	if (mousecode == MOUSE_LEFT || mousecode == MOUSE_RIGHT || mousecode == MOUSE_MID) {
		str2 = "clicado";
		if (mousecode == MOUSE_LEFT)
			str1 = "Botão Esquerdo";
		if (mousecode == MOUSE_RIGHT)
			str1 = "Botão Direito";
		if (mousecode == MOUSE_MID)
			str1 = "Botão do Meio";
	} else if (mousecode == MOUSE_UP || mousecode == MOUSE_DOWN) {
		str2 = "movido";
		if (mousecode == MOUSE_UP)
			str1 = "Roda para Cima";
		if (mousecode == MOUSE_DOWN)
			str1 = "Roda para Baixo";
	}
	printf("[MouseLog] %s %s\n", str1, str2);
	return (0);
}
