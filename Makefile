NAME = fillit

SRCS += check_piece.c
SRCS += errors.c
SRCS += grid.c
SRCS += grid_print.c
SRCS += main.c
SRCS += piece.c
SRCS += reader.c
SRCS += resolver.c
SRCS += ft_putchar.c
SRCS += ft_putendl.c
SRCS += ft_memset.c
SRCS += ft_memcpy.c
SRCS += ft_strlen.c


OBJS =  $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJS)
	gcc -o $(NAME) $(OBJS)

%.o : %.c
	gcc $(FLAGS) -o $@ -c $^

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

# $^ is the dependencies of the rule
# $@ is the name of the rule
