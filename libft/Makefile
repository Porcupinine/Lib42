CC=gcc -g -Wall 

fts:
	$(CC) -c ft_*.c -Wall -Werror -Wextra

clean:
	rm *.o libft.a testall

test: libft
	$(CC) -c test.c
	$(CC) -o  testall test.o libft.a

libft: fts
	ar -rcs libft.a ft_*.o