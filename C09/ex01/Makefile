CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a
INCDIR = includes
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

.o : .c
	$(cc) $(CFLAGS) $< -o $@ -I S(INCDIR)

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar rc $@ $^

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(TARGET)

re : fclean all
