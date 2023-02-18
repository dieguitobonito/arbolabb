#ifndef ABB_H
#define ABB_H

#include "Nodo.h"

class ABB{
	public:
		Nodo* root;
		ABB();
		// Constructor con 
		ABB(Nodo* raiz);
		void insertar(int, Nodo*);
		// Mostrar: inorden, posorden, profundidad
		void inorden(Nodo*);
};

#endif
