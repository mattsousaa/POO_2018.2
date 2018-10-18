#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include "repositorio.h"
#include "aluno.h"
#include "professor.h"
#include "disciplina.h"
#include "controller.h"

using namespace std;

int main(){
	stringstream ss;
    Controller<string> *controller = new Controller;
    controller->vaiDarBom();
    return 0;
}