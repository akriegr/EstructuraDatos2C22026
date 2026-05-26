#pragma once
#include <iostream>

struct Nodo
{
	int dato;
	Nodo* izquierdo;
	Nodo* derecho;
};


//Nosotros creamos las funciones que necesitamos equivalente a las interfaz
Nodo* crearNodo(int valor);

Nodo* insertarNodo(Nodo* raiz, int valor);