NAME=get_next_line.a

SRC= get_next_line.c \
get_next_line_utils.c

OBJS_DIR = build/
OBJS = $(SRC:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CFLAGS += -g -Wall -Werror -Wextra -O0
CC= gcc

$(OBJS_DIR)%.o : %.c get_next_line.h
	@mkdir -p $(OBJS_DIR)
# @echo "Compiling: $<"
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME) : $(OBJECTS_PREFIXED)
	@ar -rcs $(NAME) $(OBJECTS_PREFIXED)
	@echo "get_next_line ready!"

all: $(NAME)

clean:
	@rm -rf build

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re