NAME=libftprintf.a

SRC= ft_printf.c \
ft_print_char_string.c \
ft_putnbr_base.c \
ft_printf_utils.c \
ft_pointer.c \
ft_putnbr_ulong.c

OBJS_DIR = build/
OBJS = $(SRC:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CFLAGS += -g -Wall -Werror -Wextra -O0
CC= gcc

$(OBJS_DIR)%.o : %.c ft_printf.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME) : $(OBJECTS_PREFIXED)
	@ar -rcs $(NAME) $(OBJECTS_PREFIXED)
	@echo "ft_printf ready!"

all: $(NAME)

clean:
	rm -rf build

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re