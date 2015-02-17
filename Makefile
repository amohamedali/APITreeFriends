NAME = zia

SRC = module/Log/main.cpp \
			module/Log/Log.cpp \
			module/Log/LogPostConnection.cpp \
			module/Log/LogPreSend.cpp

OBJ = $(SRC:.cpp=.o)

CXX = g++

INCLDIR = -I api/ -I module/Log

CXXFLAGS += $(INCLDIR)

all:			$(NAME)

$(NAME):	$(OBJ)
					$(CXX) -o $(NAME) $(OBJ)

clean:
					rm -f $(OBJ)

fclean:		clean
					rm -f $(NAME)

re: 			fclean all

.PHONY:		all clean fclean re