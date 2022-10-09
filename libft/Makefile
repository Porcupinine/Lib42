fts:
	gcc -c ft_*.c -Wall -Werror -Wextra

clean:
	rm *.o libft.a testall

test: libft
	gcc -c test.c
	gcc -o  testall test.o libft.a

libft: fts
	ar -rcs libft.a ft_*.o