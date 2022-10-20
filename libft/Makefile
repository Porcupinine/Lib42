NAME=libft.a

SRC= ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c 

OBJS_DIR = build/
OBJS = $(SRC:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CC=gcc
CFLAGS += -g -Wall -Werror -Wextra 

UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
	LDLIBS  += -lbsd
endif

$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME) : $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)
	@echo "Libft build!"

all: $(NAME)

clean:
	rm -rf $(OBJECTS_PREFIXED)

fclean:
	rm -rf $(NAME)

clean_all: clean fclean
	rm testall test.o

test: $(NAME)
	echo $(UNAME_S)
	$(CC) -c test.c
	$(CC) -o testall test.o $(NAME) $(LDLIBS)

