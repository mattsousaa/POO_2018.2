# Name of the project
PROJ_NAME=app

# .cpp files
C_SOURCE=$(wildcard *.cpp)
 
# .h files
H_SOURCE=$(wildcard *.h)

# Object files
OBJ=$(subst .cpp,.o,$(subst source,objects,$(C_SOURCE)))

# Compiler
CC=g++ -std=c++14

# Command used at clean target
RM = rm -rf

# Flags for compiler
CC_FLAGS=-c         \
         -W         \
         -Wall      \
         -ansi      \
         -pedantic

#
# Compilation and linking
#

all: objFolder $(PROJ_NAME)
 
$(PROJ_NAME): $(OBJ)
	@ echo 'Building binary using G++ linker: $@'
	$(CC) $^ -o $@
	@ echo 'Finished building binary: $@'
	@ echo ' '
 
 	./objects/%.o: ./source/%.c ./source/%.h
	@ echo 'Building target using G++ compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '
 
 	./objects/main.o: ./source/main.c $(H_SOURCE)
	@ echo 'Building target using G++ compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '
 
objFolder:
	@ mkdir -p objects
	
mvObjs:
	@ mv *.o* ./objects/

clean:
	@ $(RM) ./objects/*.o $(PROJ_NAME) *~
	@ rmdir ./objects*
 
 	.PHONY: all clean


