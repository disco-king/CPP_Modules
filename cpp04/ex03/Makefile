NAME	=	materia
SRCS	=	AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp main.cpp
INCLUDE	=	AMateria.hpp Ice.hpp Cure.hpp Character.hpp MateriaSource.hpp \
			ICharacter.hpp IMateriaSource.hpp
OBJS	=	$(SRCS:.cpp=.o)
CC		= 	g++
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror
STD	=	-std=c++98

all:		$(NAME)

${NAME} : ${OBJS}
	${CC} ${OBJS} -o ${NAME} 

%.o : %.cpp ${INCLUDE}
	${CC} ${STD} ${FLAGS} -c $< -o $@

clean:
			$(RM) $(OBJS) 

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
