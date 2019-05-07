# Copyright 2019 Grama Nicolae

.PHONY: gitignore clean memory beauty pack run
.SILENT: beauty pack clean memory gitignore

CC = g++
CFLAGS = -Wall -Wextra -pedantic -g -O3 -std=c++11
EXE = Physics
SRC = src/physics.cpp include/Physics/Point.cpp include/Physics/PVector.cpp
OBJ = $(SRC:.cpp=.o)

# Archive settings
ANAME = Physics.zip
ACONTENTS = *
AFLAGS = -FSr 

# Coding style settings

CSFILES = */*.cpp */*.h */*/*.cpp */*/*.h

# Compiles the program
build: $(OBJ)
	$(info Compiling code...)
	@$(CC) -o $(EXE) $^ $(CFLAGS) ||:
	$(info Compilation successfull)
	-@rm -f $(OBJ) ||:
	@$(MAKE) -s gitignore ||:

%.o: %.cpp
	@$(CC) -o $@ -c $< $(CFLAGS) ||:

# Build & run
run: build
	@./$(EXE) > output.txt ||:

# Test if the output is valid
test: run
	@if diff -qZ output.txt ref/reference.txt &>/dev/null ; then echo "Test result : PASSED" ;  else echo "Test result : FAILED"; fi ||:
	@$(MAKE) -s clean ||:

# Delete the executable
clean:
	if [ ! -f $(ANAME) ]; then rm -f $(EXE) $(OBJ) output.txt && echo "Deleted the binary & the object files"; else rm -f $(EXE) $(OBJ) $(ANAME) output.txt && echo "Deleted the binary, object files & the archive"; fi
	
# Archive the files
pack: clean
	zip $(AFLAGS) $(ANAME) $(ACONTENTS)

# Styles the code, with google's standard. The only difference is
# that it uses 4 spaces instead of two for "tabs"
beauty: 
	clang-format -i -style=file $(CSFILES)

# Checks the memory for leaks
MFLAGS = --leak-check=full --show-leak-kinds=all --track-origins=yes
memory:build
	valgrind $(MFLAGS) ./$(EXE)

# Adds and updates gitignore rules
gitignore:
	@echo "$(ANAME)" > .gitignore ||:
	@echo "$(EXE)" >> .gitignore ||:
	@echo "sources/*.o" >> .gitignore ||:
	@echo ".vscode*" >> .gitignore ||:
	@echo "output.txt" >> .gitignore ||:
	echo "Updated .gitignore"