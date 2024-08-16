SRCS =	main.cpp AMateria.cpp Character.cpp Character_utiles.cpp Cure.cpp Ice.cpp \
		MateriaSource.cpp

OBJS =	${SRCS:.cpp=.o}

NAME =	main

RM =	rm -f

CC =	c++

FLAGS =	-Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJS}
		 ${CC} -o ${NAME} ${OBJS} ${FLAGS}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re