# Compiler and flags
CXX := g++
CXXFLAGS := -Wall -Wextra -O2

# Target and source files
TARGET := main.exe
SRC := main.cpp

# Build the executable
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean up build artifacts
clean:
	rm -f $(TARGET)
