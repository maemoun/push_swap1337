CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_check_errors.c ft_check_is_sorted.c ft_dup_nbrs.c ft_free.c \
		ft_get_nbrs.c ft_index_stack.c ft_pr_error.c ft_print.c ft_sort_stack.c \
		ft_sort.c ft_split.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_substr.c ft_validate.c \
		linked_list.c operations_a.c operations_b.c operations_ab.c pushswap.c

SRC_OBJ = $(SRC:.c=.o)

NAME_OUT = push_swap

all: $(NAME_OUT)

$(NAME_OUT) : $(SRC_OBJ)
	$(CC) $(CFLAGS) $(SRC_OBJ) -o $(NAME_OUT)

%.o: %.c pushswap.h
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(SRC_OBJ)

fclean: clean
	rm -rf $(NAME_OUT)

re : fclean all
