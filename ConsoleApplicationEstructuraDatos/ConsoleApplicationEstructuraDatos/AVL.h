//Enunciado 2: Árbol Balanceado 
//Desarrolle un programa que implemente un árbol balanceado.El sistema debe permitir al usuario :
//Insertar valores numéricos en el árbol mediante una interfaz en consola.
//Elegir si desea insertar más datos o visualizar los recorridos del árbol.
//Observar que el árbol se mantiene balanceado automáticamente tras cada inserción, evitando que se degrade en una lista.
//El objetivo es que el estudiante compare el funcionamiento entre un árbol binario de búsqueda tradicional y un árbol balanceado, analizando las diferencias en la forma del árbol y en la eficiencia de búsqueda.
// #pragma once

#pragma once
#include <iostream>
using namespace std;

struct Nodo
{
	int dato;
	Nodo* izquierdo;
	Nodo* derecho;
	int altura; //altura de nodo
	Nodo(int valor); // valor hacia si mismo para poder llamarlo para ir manteniendo un equilibrio sobre la estructura
};

class AVL {
	private:
		Nodo* raiz; //base
		int obtenerAltura(Nodo* nada);
		int obtenerBalance(Nodo* nada);
		Nodo* rotarDerecha(Nodo* nada);
		Nodo* rotarIzquierda(Nodo* nada);
		Nodo* insertarNodo(Nodo* nada,int valor);
		void inOrden(Nodo* nodo);
		void preOrden(Nodo* nodo);
		void postOrden(Nodo* nodo);
		//Funciones auxiliares
	public: 
		AVL();
		void insertar(int valor);
		void inOrden();
		void preOrden();
		void postOrden();

};