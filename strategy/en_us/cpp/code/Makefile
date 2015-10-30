# Compiler Command
COMPILER := g++

# Folder Names
HEADERS := headers
SOURCES := sources

# Temporary Build Folder Name
BUILD := build

# Target Program Name
TARGET := strategy

# Compiler Flags
CPPFLAGS := -O2 -g -W -Wall -pedantic -ansi -Wno-long-long -std=c++0x -Wextra -Wshadow -I$(HEADERS)

# Build a List of Object Files
CPPFILES := $(foreach dir,$(SOURCES),$(wildcard $(dir)/*.cpp))

all: main

run: main
	./$(TARGET)

main: $(HPPFILES)
	@echo Building "$(TARGET)"...
	@mkdir -p $(BUILD)
	@g++ $(CPPFILES) $(CPPFLAGS) -o $(TARGET)
	@rm -rf $(BUILD)/
	@echo ...Built executable "$(TARGET)"

clean:
	@echo Cleaning...
	@rm -rf $(BUILD)/
	@rm -f $(TARGET)
	@echo ...Cleaned!
