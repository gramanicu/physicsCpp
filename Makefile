# Copyright 2019 Grama Nicolae

CC = g++
CFLAGS = -pedantic -Wextra -Wall
EXE = physics
SOURCES = physics.cpp Point.cpp PVector.cpp

# Archive settings
ANAME = PhysicsCpp.zip
ACONTENTS = README Makefile *.c *.h
AFLAGS = -FSr 

# Coding style settings

CSFILES = *.cpp *.h

# Compile the program
build: $(SOURCES)
		$(CC) -o $(EXE) $^ $(CFLAGS)

# Build & run
run: build
		./$(EXE)

# Archive the files
pack:
	zip $(AFLAGS) $(ANAME) $(ACONTENTS) 
	
.PHONY:pack

# Delete the executable
clean:
	rm -f $(EXE)

.PHONY:clean

# Styles the code, with google's standard. The only difference is
# that it uses 4 spaces instead of two for "tabs"
beauty: 
	clang-format -i -style=file $(CSFILES)

.PHONY:beauty

