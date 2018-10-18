#ifndef CONTROLLER
#define CONTROLLER

#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <string>
#include "repositorio.h"
#include "aluno.h"
#include "professor.h"
#include "disciplina.h"

using namespace std;

template <class T>
class Controller{
public:
    Repositorio<Aluno> r_al;
    Repositorio<Professor> r_pr;
    Repositorio<Disciplina> r_dis;

    Controller():{
    	
    };

    void menu(string _in);

    void vaiDarBom();

};

#endif // CONTROLLER