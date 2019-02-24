# Copyright 2019 Grama Nicolae

CC = g++
CFLAGS = -pedantic -Wextra -Wall
EXE = physics
SOURCES = src/physics.cpp include/Physics/Point.cpp include/Physics/PVector.cpp

# Archive settings
ANAME = Physics.zip
ACONTENTS = *
AFLAGS = -FSr 

# Coding style settings

CSFILES = *.cpp *.h

# Compile the program
build: $(SOURCES)
		$(CC) -o $(EXE) $^ $(CFLAGS)

# Build & run
run: build
		./$(EXE)

# Delete the executable
clean:
	rm -f $(EXE)
	rm -f $(ANAME)

.PHONY:clean

# Archive the files
pack: clean
	zip $(AFLAGS) $(ANAME) $(ACONTENTS) 
	
.PHONY:pack

# Styles the code, with google's standard. The only difference is
# that it uses 4 spaces instead of two for "tabs"
beauty: 
	clang-format -i -style=file $(CSFILES)

.PHONY:beauty

