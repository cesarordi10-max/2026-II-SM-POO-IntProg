CXX      := g++
CXXFLAGS := -std=c++23
TARGET   := main
SRCS     := main.cpp Demos.cpp aritmetica.cpp

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)
