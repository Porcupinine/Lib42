CC=gcc -g -Wall 

UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
	LDLIBS  += -lbsd
endif

fts:
	$(CC) -c ft_*.c -Wall -Werror -Wextra

clean:
	rm *.o libft.a testall

test: libft
	echo $(UNAME_S)
	$(CC) -c test.c
	$(CC) -o  testall test.o libft.a $(LDLIBS)

libft: fts
	ar -rcs libft.a ft_*.o