# Pratica 2 de POO
PROJ_NAME=app

# .cpp files
C_SOURCE=$(wildcard *.cpp)
 
# .h files
H_SOURCE=$(wildcard *.h)

# Object files
OBJ=$(C_SOURCE:.cpp=.o)

# Compiler
CC=g++ -std=c++14

# Flags for compiler
CC_FLAGS=-c         \
         -W         \
         -Wall      \
         -ansi      \
         -pedantic

#
# Compilation and linking
#

all: $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	$(CC) -o $@ $^
 
%.o: %.c %.h
 
	$(CC) -o $@ $< $(CC_FLAGS)

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
	rm -rf *.o app *~


