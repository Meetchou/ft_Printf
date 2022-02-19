LIBFT = ./libft/libft.a

NAME = libftprintf.a

SRCS =  src/ft_treat_char.c src/ft_treat_string.c\
	src/ft_treat_conv.c src/ft_treat_unsigned_int.c\
	src/ft_convert_hexa.c src/ft_treat_hexa.c src/ft_hexa_nbrlen.c\
	src/ft_treat_int.c src/ft_printf.c src/ft_treat_pointer.c\

CC = cc -Wall -Wextra -Werror -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	make -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)

all : $(NAME)

clean :
	make clean -C ./libft
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(LIBFT)
	rm -rf $(NAME)

re : fclean all
