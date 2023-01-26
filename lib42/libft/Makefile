NAME=libft.a

HEADERS := headers

SRC= libft_src/ft_atoi.c libft_src/ft_bzero.c libft_src/ft_calloc.c libft_src/ft_isalnum.c libft_src/ft_isalpha.c libft_src/ft_isascii.c \
libft_src/ft_isdigit.c libft_src/ft_isprint.c libft_src/ft_itoa.c libft_src/ft_memcmp.c libft_src/ft_memcpy.c libft_src/ft_memmove.c \
libft_src/ft_memset.c libft_src/ft_putchar_fd.c libft_src/ft_putendl_fd.c libft_src/ft_putnbr_fd.c libft_src/ft_putstr_fd.c libft_src/ft_split.c libft_src/ft_strchr.c \
libft_src/ft_strdup.c libft_src/ft_strjoin.c libft_src/ft_strlcat.c libft_src/ft_strlcpy.c libft_src/ft_strlen.c libft_src/ft_strncmp.c libft_src/ft_strnstr.c \
libft_src/ft_strrchr.c libft_src/ft_strtrim.c libft_src/ft_substr.c libft_src/ft_tolower.c libft_src/ft_toupper.c libft_src/ft_strmapi.c libft_src/ft_striteri.c \
libft_src/ft_memchr.c libft_src/ft_lstnew.c libft_src/ft_lstadd_front.c libft_src/ft_lstsize.c libft_src/ft_lstlast.c \
libft_src/ft_lstadd_back.c libft_src/ft_lstdelone.c libft_src/ft_lstclear.c libft_src/ft_lstiter.c libft_src/ft_lstmap.c \
ft_printf_src/ft_printf.c ft_printf_src/ft_print_char_string.c ft_printf_src/ft_putnbr_base.c ft_printf_src/ft_printf_utils.c ft_printf_src/ft_pointer.c ft_printf_src/ft_putnbr_ulong.c \
get_next_line_src/get_next_line.c get_next_line_src/get_next_line_utils.c \

OBJS_DIR = build/
OBJS = $(SRC:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

CFLAGS += -g -Wall -Werror -Wextra -O0

$(OBJS_DIR)%.o : %.c $(HEADERS)
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME) : $(OBJECTS_PREFIXED)
	@ar r $(NAME) $(OBJECTS_PREFIXED)
	@echo "Libft ready!"

all: $(NAME)

clean:
	rm -rf $(OBJECTS_PREFIXED)

fclean: clean
	rm -rf $(NAME)

re: fclean all

clean_test: fclean
	rm testall test.o