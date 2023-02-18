#include "Nodo.h"

Nodo::Nodo(){
	dato = 0;
	izq = nullptr;
	der = nullptr;
}

Nodo::Nodo(int dato){
	this->dato = dato;
	izq = nullptr;
	der = nullptr;
}

Nodo::Nodo(int dato, Nodo* izq, Nodo* der){
	this->dato = dato;
	this->izq = izq;
	this->der = der;
}

