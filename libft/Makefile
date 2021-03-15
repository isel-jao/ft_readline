

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

BLACK	= \033[0;30m
RED		= \033[0;31m
GREEN	= \033[0;32m
YELLOW	= \033[0;33m
BLUE	= \033[0;34m
PURPLE	= \033[0;35m
CYAN	= \033[0;36m
GRAY	= \033[0;37m
NC		= \033[0m


AR      = ar rcs

NAME    = libft.a
HEAD    = libft.h

SRCS_DIR	=	./srcs/
OBJ_DIR		=	./objs/
INC_DIR		=	./includes/

SRCS    =	ft_memmove.c 
SRCS	+=	ft_strchr.c 
SRCS	+=	ft_strnstr.c 
SRCS	+=	ft_atoi.c 
SRCS	+=	ft_isprint.c 
SRCS	+=	ft_memset.c 
SRCS	+=	ft_strdup.c 
SRCS	+=	ft_strrchr.c 
SRCS	+=	ft_bzero.c 
SRCS	+=	ft_memalloc.c 
SRCS	+=	ft_strjoin.c 
SRCS	+=	ft_strtrim.c 
SRCS	+=	ft_calloc.c 
SRCS	+=	ft_itoa.c 
SRCS	+=	ft_putchar_fd.c 
SRCS	+=	ft_strlcat.c 
SRCS	+=	ft_substr.c 
SRCS	+=	ft_isalnum.c 
SRCS	+=	ft_memccpy.c 
SRCS	+=	ft_putendl_fd.c 
SRCS	+=	ft_strlcpy.c 
SRCS	+=	ft_tolower.c 
SRCS	+=	ft_isalpha.c 
SRCS	+=	ft_memchr.c 
SRCS	+=	ft_putnbr_fd.c 
SRCS	+=	ft_strlen.c 
SRCS	+=	ft_toupper.c 
SRCS	+=	ft_isascii.c 
SRCS	+=	ft_memcmp.c 
SRCS	+=	ft_putstr_fd.c 
SRCS	+=	ft_putstr.c 
SRCS	+=	ft_strmapi.c 
SRCS	+=	ft_isdigit.c 
SRCS	+=	ft_memcpy.c 
SRCS	+=	ft_split.c 
SRCS	+=	ft_strncmp.c 
SRCS	+=	get_next_line.c 
SRCS	+=	ft_free.c 
SRCS	+=	ft_strcmp.c 
SRCS	+=	ft_putendl.c 
SRCS	+=	ft_strisnum.c 
SRCS	+=	tab_len.c 
SRCS	+=	ft_strcpy.c 

OBJ			=	$(addprefix $(OBJ_DIR),$(SRCS:.c=.o))

INC			=	$(addprefix -I,$(INC_DIR))

RM			=	/bin/rm -f
RM_DIR		=	/bin/rm -rf

$(OBJ_DIR)%.o:$(SRCS_DIR)%.c $(INC_DIR)*.h
	@$(CC) $(FLAGS) -c $< -o $@

all:
	@mkdir -p $(OBJ_DIR)
	@$(MAKE) $(NAME) --no-print-directory

$(NAME): $(OBJ)
	@$(AR) $(NAME) $?


clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

eclean: clean fclean

re: fclean all