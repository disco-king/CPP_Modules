NAME	=	humans
SRCS	=	HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
INCLUDE	=	HumanA.hpp HumanB.hpp Weapon.hpp
OBJS	=	$(SRCS:.cpp=.o)
CC		= 	g++
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror
STD	=	-std=c++98

all:		$(NAME)

${NAME} : ${OBJS} ${INCLUDE}
	${CC} ${OBJS} -o ${NAME} 

%.o : %.cpp
	${CC} ${STD} ${FLAGS} -c $< -o $@

clean:
			$(RM) $(OBJS) 

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
