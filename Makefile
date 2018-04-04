#exe:*.cpp
#	g++ -std=c++0x -I ../antlr/antlr4-runtime -o exe ./*.cpp *.cpp ../#antlr/lib/libantlr4-runtime.a
#
#clean:
#	rm -rf *.o

# Declaration of variables
CC = g++ -std=c++11
CC_FLAGS = -w -I ./antlr-runtime/include/antlr4-runtime
LIB = ./antlr-runtime/lib/libantlr4-runtime.a
SOURCEDIR = ./
 
# File names
EXEC = exe
SOURCES := $(shell find $(SOURCEDIR) -name '*.cpp')
OBJECTS = $(SOURCES:.cpp=.o)

# Main target
$(EXEC): $(OBJECTS)
	echo $(CC) $(OBJECTS) -o $(EXEC) $(LIB)
	$(CC) $(OBJECTS) -o $(EXEC) $(LIB)

# To obtain object files
%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@

clean:
	rm -f $(EXEC) $(OBJECTS)



