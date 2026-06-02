#include <iostream>
#include "AVL.h"
#include "algorithm"
using namespace std;

//primero ajustar el nodo base

Nodo :: Nodo(int valor)
{
	dato = valor;
	izquierdo = nullptr;
	derecho = nullptr;
	int altura = 1; //altura de nodo para el balance

}

//Constructor Inicial AVL
AVL :: AVL()
{
	raiz = nullptr;
}

int AVL::obtenerAltura(Nodo* nodo) 
{
	if (nodo == nullptr) 
	{
		return 0; // si el nodo no trae datos devolvemos 0
	}
	return nodo->altura;
}

int AVL::obtenerBalance(Nodo* nodo)
{
	if (nodo == nullptr)
	{
		return 0; // si el nodo no trae datos devolvemos 0
	}
	//return izquierda - derecha en sus alturas
}


Nodo* AVL::rotarDerecha(Nodo* izq) 
{
	Nodo* derecha = izq->izquierdo; //rotacion a la derecha //paso 1 
	Nodo* temporal = derecha->derecho; // paso 2

	derecha->derecho = izq; //paso 1 
	izq->izquierdo = temporal; // paso 2
	
	izq->altura = max(obtenerAltura(izq->izquierdo), obtenerAltura(izq->derecho))+1;
	derecha->altura = max(obtenerAltura(derecha->izquierdo), obtenerAltura(derecha->derecho)) + 1;

	return derecha;
}

//rotar izquierda lo mismo pero alrevez 

Nodo* AVL::insertarNodo(Nodo* nodo, int valor)
{
	if (nodo == nullptr)
	{
		return 0; // si el nodo no trae datos devolvemos 0
	}
	//paso1 si es null
	//paso2 si es mayor el dato
	//paso 3 si es menor el dato
	//sacar altura // 1 +  max(obtenerAltura(izq->izquierdo), obtenerAltura(izq->derecho))
	//balance = obtenerBalance, si el balance es mayor a 1 inserta a la izquierda y retorn a la derecha // si el balance es menor que 1 inserta a la derecha y retorna a la derecha
}

//recorrido son similares al primer ejemplo 
