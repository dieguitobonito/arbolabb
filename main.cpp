#include <iostream>
#include "ABB.h"

int main(){
	char opt = ' ';
	ABB arbolito = new ABB();
	std::cout << "1. Insertar\n2. Inorden\n3. Salir\n: ";
	std::cin >> opt;

	switch(opt){
		case '1':
			int num;
			std::cout << "Inserte número: ";
			std::cin >> num;
			arbolito->insertar(num, arbolito->num);
			break;
		}
		case '2':{
			arbolito->inorden(arbolito->root);
			break;
		}
		case '3':{
			std::cout << "ayos" << std::endl;
			break;
		}
		default:
			 std::cout << "Incorrecto" << std::endl;

	}
	return 0;
}
