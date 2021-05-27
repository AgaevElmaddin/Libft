NAME = libft.a

SRCS =  ft_tolower.c ft_strrchr.c ft_strnstr.c ft_strncmp.c\
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strdup.c ft_strchr.c\
		ft_memset.c ft_memcpy.c ft_memcmp.c ft_memchr.c ft_memccpy.c\
		ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c\
		ft_calloc.c ft_bzero.c ft_atoi.c ft_memmove.c ft_substr.c ft_strjoin.c\
		ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strtrim.c\
		ft_strmapi.c ft_itoa.c ft_split.c ft_toupper.c

SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJSB = $(SRCS_B:.c=.o)

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

bonus:
	$(CC) $(FLAGS) -c $(SRCS) $(SRCS_B)
	ar rcs $(NAME) $(OBJS) $(OBJSB)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: all, bonus, clean, fclean, re
