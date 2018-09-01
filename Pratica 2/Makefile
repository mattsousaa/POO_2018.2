# Makefile para pratica 2 de POO
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
	@ echo 'Building binary using GCC linker: $@'
	$(CC) $^ -o $@
	@ echo 'Finished building binary: $@'
	@ echo ' '
 
 	./objects/%.o: ./source/%.c ./source/%.h
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '
 
 	./objects/main.o: ./source/main.c $(H_SOURCE)
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '
 
objFolder:
	@ mkdir -p objects
	
mvObjs:
	@ mv *.o* ./objects/

objs:
	$(CC) -c passageiro.cpp 
	$(CC) -c topic.cpp 
	$(CC) -c aqui.cpp

output: passageiro.o topic.o aqui.o
	$(CC) -o passageiro.o
	$(CC) -o topic.o
	$(CC) -o aqui.o 

passageiro.o: passageiro.cpp 
	$(CC) -c passageiro.cpp 

topic.o: topic.cpp
	$(CC) -c topic.cpp 

aqui.o: aqui.cpp
	$(CC) -c aqui.cpp

clean:
	@ $(RM) ./objects/*.o $(PROJ_NAME) *~
	@ rmdir ./objects*
 
 	.PHONY: all clean


