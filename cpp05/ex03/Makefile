NAME	=	bureau
SRCS	=	Bureaucrat.cpp Form.cpp main.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp ShrubberyCreationForm.cpp \
			Intern.cpp
INCLUDE	=	Bureaucrat.hpp Form.hpp \
			PresidentialPardonForm.hpp \
			RobotomyRequestForm.hpp ShrubberyCreationForm.hpp \
			Intern.hpp
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
			$(RM) $(OBJS) *_shruberry

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
