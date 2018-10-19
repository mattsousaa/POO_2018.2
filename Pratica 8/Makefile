all: folder app

CPPFLAGS = -Wall -W -s -pedantic-errors
GCC = g++ -std=c++14
BIN = bin
OBJ = obj
INC = -Iinc/

app: main nota sistema usuario
	@echo "Linking..."
	+@$(GCC) $(CPPFLAGS) -o $(BIN)/app $(OBJ)/main.o $(OBJ)/nota.o $(OBJ)/sistema.o $(OBJ)/usuario.o 
	@echo "Binary are ready in $(BIN)/app"

main:
	+@echo "Compile: $@"
	@$(GCC) $(CPPFLAGS) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

nota:
	+@echo "Compile: $@"
	@$(GCC) $(CPPFLAGS) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

sistema:
	+@echo "Compile: $@"
	@$(GCC) $(CPPFLAGS) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

usuario:
	+@echo "Compile: $@"
	@$(GCC) $(CPPFLAGS) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

folder:
	@mkdir -p $(OBJ) $(BIN)

clean:
	@rm -rf $(OBJ)/* $(BIN)/* $(OBJ) $(BIN)