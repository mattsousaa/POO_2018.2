all: folder app

CPPFLAGS = -Wall -W -s -pedantic-errors
GCC = g++ -std=c++14
BIN = bin
OBJ = obj
INC = -Iinc/

app: main doctor patient user 
	@echo "Linking..."
	+@$(GCC) $(CPPFLAGS) -o $(BIN)/app $(OBJ)/main.o $(OBJ)/doctor.o $(OBJ)/patient.o $(OBJ)/user.o 
	@echo "Binary are ready in $(BIN)/app"

main:
	+@echo "Compile: $@"
	@$(GCC) $(CPPFLAGS) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

doctor:
	+@echo "Compile: $@"
	@$(GCC) $(CPPFLAGS) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

patient:
	+@echo "Compile: $@"
	@$(GCC) $(CPPFLAGS) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

user:
	+@echo "Compile: $@"
	@$(GCC) $(CPPFLAGS) src/$@.cpp $(INC) -c -o $(OBJ)/$@.o

folder:
	@mkdir -p $(OBJ) $(BIN)

clean:
	@rm -rf $(OBJ)/* $(BIN)/* $(OBJ) $(BIN)