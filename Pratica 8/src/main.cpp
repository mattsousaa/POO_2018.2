#include <iostream>
#include "usuario.h"
#include "sistema.h"
#include "nota.h"

int main(){
	
    Sistema sistema;
    controller(sistema);
    rep_Anotacoes(sistema);
    return 0;
}