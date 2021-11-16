NAME=food_lines

CC=clang
CFLAGS= -Wall -Werror -Wextra -g3
RM= rm -rf
LIB= -L . -lft
INC= -I /mnt/c/Users/Lukas/algorithm/algorithmic-thinking/libft/inc

FILES= src/main

SRC = $(addsuffix .c, $(FILES))
OBJ = $(addsuffix .o, $(FILES))

.c.o:
	$(CC) $(CFLAGS) $(INC) -c $^ -o $@

$(NAME): $(OBJ)
	${MAKE} -C /mnt/c/Users/Lukas/algorithm/algorithmic-thinking/libft/. 
	mv /mnt/c/Users/Lukas/algorithm/algorithmic-thinking/libft/libft.a .
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIB)

all: $(NAME)

clean:
	${MAKE} -C /mnt/c/Users/Lukas/algorithm/algorithmic-thinking/libft/. clean 
	$(RM) $(OBJ)

fclean: clean
	${MAKE} -C /mnt/c/Users/Lukas/algorithm/algorithmic-thinking/libft/. fclean 
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
