#include "ABB.h"

// Constructor
ABB::ABB(){
	root = nullptr;
}

ABB::ABB(Nodo* raiz){
	this->root = raiz;
};

void ABB::insertar(int dato, Nodo* act){
	if(root != nullptr){
		// Irse a la izquierda
		if(dato < act->dato){
			// Hay espacio
			if(act->izq == nullptr){
				Nodo* tmp = new Nodo(dato);
				act->izq = tmp;
			}
			// No hay espacio en la izquierda
			else{ 
				insertar(dato, act->izq);
			}
		}
		// Irse a la derecha
		else{
			// Hay espacio
			if(act->der == nullptr){
				Nodo* tmp = new Nodo(dato, nullptr, nullptr);
				act->der = tmp;
			}
			// No hay espacio
			else{ 
				insertar(dato, act->der);
			}
		}
	}
	else{
		Nodo* tmp = new Nodo(dato);
		root = tmp;
	}
}

//
// Mostrar
//

void ABB::inorden(Nodo* act){
	if(act){
		inorden(act->izq);
		std::cout << act->izq << std::endl;
		inorden(act->der);
		std::cout << act->der << std::endl;
	}
}
