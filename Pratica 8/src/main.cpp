#include <iostream>
#include "usuario.h"
#include "sistema.h"
#include "nota.h"

int main(){
	
    Sistema sistema;
    initialize(sistema);
    commandLine(sistema);
    return 0;
}