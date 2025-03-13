# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: njung <njung@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/13 13:27:13 by njung             #+#    #+#              #
#    Updated: 2025/03/13 13:28:56 by njung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME_CLIENT = client
NAME_SERVER = server
NAME_CLIENT_BONUS = client_bonus
NAME_SERVER_BONUS = server_bonus

SRC_DIR = src
OBJ_DIR = obj
LIBFT_DIR = lib/libft
FT_PRINTF_DIR = lib/ft_printf
INC_DIR = include

SRC_CLIENT = $(SRC_DIR)/client/client.c
SRC_SERVER = $(SRC_DIR)/server/server.c
SRC_CLIENT_BONUS = $(SRC_DIR)/client/client_bonus.c
SRC_SERVER_BONUS = $(SRC_DIR)/server/server_bonus.c

OBJ_CLIENT = $(SRC_CLIENT:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_SERVER = $(SRC_SERVER:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_CLIENT_BONUS = $(SRC_CLIENT_BONUS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_SERVER_BONUS = $(SRC_SERVER_BONUS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

LIBFT = $(LIBFT_DIR)/libft.a
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a
LIBS = -L$(LIBFT_DIR) -lft -L$(FT_PRINTF_DIR) -lftprintf

HEADERS = -I$(INC_DIR) -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR)

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(LIBFT) $(FT_PRINTF) $(OBJ_CLIENT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(HEADERS) $(LIBS) -o $(NAME_CLIENT)

$(NAME_SERVER): $(LIBFT) $(FT_PRINTF) $(OBJ_SERVER)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(HEADERS) $(LIBS) -o $(NAME_SERVER)

bonus: $(NAME_CLIENT_BONUS) $(NAME_SERVER_BONUS)

$(NAME_CLIENT_BONUS): $(LIBFT) $(FT_PRINTF) $(OBJ_CLIENT_BONUS)
	$(CC) $(CFLAGS) $(OBJ_CLIENT_BONUS) $(HEADERS) $(LIBS) -o $(NAME_CLIENT_BONUS)

$(NAME_SERVER_BONUS): $(LIBFT) $(FT_PRINTF) $(OBJ_SERVER_BONUS)
	$(CC) $(CFLAGS) $(OBJ_SERVER_BONUS) $(HEADERS) $(LIBS) -o $(NAME_SERVER_BONUS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/minitalk.h $(INC_DIR)/minitalk_bonus.h
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTF_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(FT_PRINTF_DIR) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(FT_PRINTF_DIR) fclean
	rm -f $(NAME_CLIENT)
	rm -f $(NAME_SERVER)
	rm -f $(NAME_CLIENT_BONUS)
	rm -f $(NAME_SERVER_BONUS)

re: fclean all

.PHONY: all clean fclean re bonus
