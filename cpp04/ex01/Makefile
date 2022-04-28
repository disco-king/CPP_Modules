NAME	=	animals
SRCS	=	Animal.cpp Cat.cpp Dog.cpp main.cpp \
			Brain.cpp
INCLUDE	=	Animal.hpp Cat.hpp Dog.hpp \
			Brain.hpp
OBJS	=	$(SRCS:.cpp=.o)
CC		= 	g++
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror
STD	=	-std=c++98

all:		$(NAME)

${NAME} : ${OBJS}
	${CC} ${OBJS} -o ${NAME} 

%.o : %.cpp ${INCLUDE}
	${CC} -g ${STD} ${FLAGS} -c $< -o $@

clean:
			$(RM) $(OBJS) 

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
