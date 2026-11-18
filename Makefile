NAME = lib.a
CC = cc

SRCS = extract_the_reaminder_buffer.c extract_a_line.c search_character.c\
		join_to_buffer.c

OBJS = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(AFLAGS) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean