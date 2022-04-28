NAME	=	ref
SRCS	=	main.cpp
OBJS	=	$(SRCS:.cpp=.o)
CC		= 	g++
RM		=	rm -rf
FLAGS	=	-Wall -Wextra -Werror
STD		=	-std=c++98 

all:		$(NAME)

${NAME} : ${OBJS}
	${CC} ${OBJS} -o ${NAME} 

%.o : %.cpp
	${CC} ${STD} ${FLAGS} -c $< -o $@

clean:
			$(RM) $(OBJS) 

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
