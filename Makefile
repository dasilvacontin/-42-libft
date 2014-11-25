FLAGS = -Wall -Wextra -Werror
CC = gcc
SRC = *.c

all:
	$(CC) $(FLAGS) $(SRC)
