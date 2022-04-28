NAME	=	book	
SRCS	=	Phonebook.cpp Contact.cpp main.cpp
INCLUDE	=	Phonebook.hpp Contact.hpp
OBJS	=	$(SRCS:.cpp=.o)
CC		= 	g++
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror

all:		$(NAME)

${NAME} : ${OBJS} ${INCLUDE}
	${CC} ${OBJS} -o ${NAME} 

%.o : %.cpp
	${CC} ${FLAGS} -c $< -o $@

clean:
			$(RM) $(OBJS) 

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
