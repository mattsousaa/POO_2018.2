all: folder app

GCC = g++ -std=c++14
BIN = bin
OBJ = obj
INC = -Iinc/

app: main pluto_system transacao
	@echo "Linking..."
	+@$(GCC) -o $(BIN)/app $(OBJ)/main.o $(OBJ)/pluto_system.o $(OBJ)/transacao.o 
	@echo "Binary are ready in $(BIN)/app"

main:
	+@echo "Compile: $@"
	@$(GCC) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

pluto_system:
	+@echo "Compile: $@"
	@$(GCC) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

transacao:
	+@echo "Compile: $@"
	@$(GCC) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

folder:
	@mkdir -p $(OBJ) $(BIN)

clean:
	@rm -rf $(OBJ)/* $(BIN)/* $(OBJ) $(BIN)

###############################################################################