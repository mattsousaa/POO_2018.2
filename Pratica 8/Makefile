all: folder app

GCC = g++ -std=c++14
BIN = bin
OBJ = obj
INC = -Iinc/

app: main nota sistema usuario
	@echo "Linking..."
	+@$(GCC) -o $(BIN)/app $(OBJ)/main.o $(OBJ)/nota.o $(OBJ)/sistema.o $(OBJ)/usuario.o 
	@echo "Binary are ready in $(BIN)/app"

main:
	+@echo "Compile: $@"
	@$(GCC) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

nota:
	+@echo "Compile: $@"
	@$(GCC) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

sistema:
	+@echo "Compile: $@"
	@$(GCC) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

usuario:
	+@echo "Compile: $@"
	@$(GCC) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

folder:
	@mkdir -p $(OBJ) $(BIN)

clean:
	@rm -rf $(OBJ)/* $(BIN)/* $(OBJ) $(BIN)