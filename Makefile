
NAME = gamelvl.exe
SRC = src\main.c src\game.c src\level_1.c src\level_2.c src\level_3.c
INCLUDE = includes

all:
	@gcc -I $(INCLUDE) $(SRC) -o $(NAME)
clean:
	@del $(NAME)
re: clean all
