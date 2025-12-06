# !--MakeFile--

CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
SRC=main.cpp ClapTrap.cpp
OBJS=$(SRC:.cpp=.o)
TARGET=claptrap

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

re: fclean all

run:
	./$(TARGET)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(TARGET)

.PHONY: all re clean fclean
