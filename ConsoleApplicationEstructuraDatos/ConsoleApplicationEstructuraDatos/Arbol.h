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

void inorden(Nodo* raiz);
// recordando la recursividad
//
//void preorden(Nodo* raiz);
void preorden(Nodo* raiz);
//
//void postorden(Nodo* raiz);
void postorden(Nodo* raiz);