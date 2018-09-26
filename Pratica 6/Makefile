all: folder app

GCC = g++ -std=c++14
BIN = bin
OBJ = obj
INC = -Iinc/

app: main fone contato agenda
	@echo "Linking..."
	+@$(GCC) -o $(BIN)/app $(OBJ)/main.o $(OBJ)/fone.o $(OBJ)/contato.o $(OBJ)/agenda.o 
	@echo "Binary are ready in $(BIN)/app"

main:
	+@echo "Compile: $@"
	@$(GCC) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

fone:
	+@echo "Compile: $@"
	@$(GCC) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

contato:
	+@echo "Compile: $@"
	@$(GCC) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

agenda:
	+@echo "Compile: $@"
	@$(GCC) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

folder:
	@mkdir -p $(OBJ) $(BIN)

clean:
	@rm -rf $(OBJ)/* $(BIN)/* $(OBJ) $(BIN)

###############################################################################