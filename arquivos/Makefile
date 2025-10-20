NAME		=	telaInicial
CXX			=	cc
CXXFLAGS	=	-Wall -Wextra -Werror
RM			=	rm -f

INC_DIR		=	inc/
SRC_DIR		=	src/
MLX_DIR		=	mlx_linux/
INC			=	-I$(MLX_DIR) -I$(INC_DIR)

MLX			=	$(MLX_DIR)libmlx_Linux.a
MLXFLAGS 	= 	-lm -lXext -lX11

SRC			=	main.c \
				exit.c \
				gameplay.c \
				init.c \
				input.c \
				render.c

SRCS		=	$(addprefix $(SRC_DIR), $(SRC))
OBJ			= 	$(SRCS:.c=.o)

%.o: %.c
	$(CXX) $(INC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(MLX) $(MLXFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
