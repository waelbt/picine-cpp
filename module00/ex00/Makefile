NAME	= megaphone

CFLAGS	= -std=c++98 -Wall -Wextra -Werror

SRC		= megaphone.cpp

OBJ		= ${SRC:.cpp=.o}

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

all	: $(NAME)

${NAME}	: ${OBJ}
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean   :
	${RM} ${OBJ}

fclean	: clean
	${RM} $(NAME)

re		: fclean all

.PHONY	:	all fclean re clean