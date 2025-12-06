# !--MakeFile--

CXX=c++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
SRC=main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS=$(SRC:.cpp=.o)
TARGET=scavtrap

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

fclean: clean
	rm -f $(TARGET)

.PHONY: all re clean fclean
