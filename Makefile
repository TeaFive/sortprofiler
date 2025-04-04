# Compiler and flags
CXX := g++
CXXFLAGS := -Wall -Wextra -O2 -std=c++11

# Source files
SRC := main.cpp sorting.cpp helpers.cpp cli_utils.cpp

# Header file
HDR := sorting.h helpers.h cli_utils.h

# Target executable
TARGET := main

# Create temp directory
$(shell mkdir -p temp)

# Build the executable directly
all: create_temp $(TARGET)

# Create temp directory
create_temp:
	@mkdir -p temp

# Build executable
$(TARGET): $(SRC) $(HDR)
	TMP=./temp TEMP=./temp TMPDIR=./temp $(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean up build artifacts
clean:
	rm -f $(TARGET)
	rm -rf temp