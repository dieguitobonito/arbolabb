#ifndef NODO_H
#define NODO_H

class Nodo{
	public:
		int dato;
		Nodo* izq;
		Nodo* der;
	
		Nodo();
		Nodo(int);
		Nodo(int, Nodo*, Nodo*);
};

#endif
