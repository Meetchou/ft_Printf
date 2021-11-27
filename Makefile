LIBFT = ./libft/libft.a

N_TEMP = temp.a

NAME = libftprintf.a

SRCS =  src/ft_treat_char.c src/ft_treat_string.c\
	src/ft_treat_conv.c src/ft_treat_unsigned_int.c\
	src/ft_convert_hexa.c src/ft_treat_hexa.c src/ft_hexa_nbrlen.c\
	src/ft_treat_int.c src/ft_printf.c src/ft_treat_pointer.c\
		
SURPL_O = ft_treat_char.o ft_treat_string.o\
	ft_treat_conv.o ft_treat_unsigned_int.o\
	ft_convert_hexa.o ft_treat_hexa.o ft_hexa_nbrlen.o\
	ft_treat_int.o ft_printf.o ft_treat_pointer.o\
CC = cc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(SURPL_O) 
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all
