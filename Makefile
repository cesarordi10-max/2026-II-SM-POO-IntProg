CXX      := g++
CXXFLAGS := -std=c++23
TARGET   := main.exe
SRCS     := main.cpp Demos.cpp aritmetica.cpp
HEADERS  := Demos.h aritmetica.h

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@

run: all
	./$(TARGET)

clean:
	$(RM) $(TARGET)
