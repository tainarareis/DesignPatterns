### Makefile to build C++ programs

## Context Attribute
# Target Program Name
TARGET := adapter

## Directory Attributes
# Header Folder Name
HEADERS := headers
# Source Folder Name
SOURCES := sources

## Compiler Settings
# Compiler Command
COMPILER := g++
# Standard Version
STD := 11
# Compiler Flags
CPPFLAGS := -O2 -g -W -Wall -pedantic -ansi -Wno-long-long -std=c++$(STD) -Wextra -Wshadow -I$(HEADERS)
# All Sources
CPPFILES := $(foreach dir,$(SOURCES),$(wildcard $(dir)/*.cpp))

## Makers

# Default Make (Compile the Program)
all: compile

# Default Make (Compile) and Automatic Run the Program
run: all
	@clear
	@./$(TARGET)

# Compile the Program
compile:
	@echo Building "$(TARGET)"...
	@$(COMPILER) $(CPPFILES) $(CPPFLAGS) -o $(TARGET)
	@echo ...Successfully Built \""$(TARGET)"\"

# Remove the Program
clean:
	@echo Removing \""$(TARGET)"\"...
	@rm -f $(TARGET)
	@echo ...Removed!

# Run (Compile and Run) and Clean (Delete the Program) Make
runclean: run	clean
