NAME=libftprintf.a

SRC= ft_printf.c \
ft_print_char_string.c \
ft_putnbr_base.c \
ft_printf_utils.c \
ft_pointer.c \
ft_putnbr_base_ulong.c

#SRCBONUS=


OBJS_DIR = build/
OBJS = $(SRC:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

#OBJSB = $(SRCBONUS:.c=.o)
#OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

CFLAGS += -g -Wall -Werror -Wextra -O0

$(OBJS_DIR)%.o : %.c ft_printf.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME) : $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)
	@echo "ft_printf ready!"

all: $(NAME)

clean:
	rm -rf $(OBJECTS_PREFIXED)

fclean: clean
	rm -rf $(NAME)

re: fclean all

#bonus : $(OBJECTS_BONUS_PREFIXED)
#		@ar r $(NAME) $(OBJECTS_BONUS_PREFIXED)
#		@echo "Bonus ready!"