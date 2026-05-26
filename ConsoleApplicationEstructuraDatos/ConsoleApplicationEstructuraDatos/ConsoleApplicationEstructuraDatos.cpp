// ConsoleApplicationEstructuraDatos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//
//Enunciado 1: Árbol Binario de Búsqueda(ABB)
//
//Desarrolle un programa que implemente un árbol binario de búsqueda(ABB)
// con interfaz en consola.El sistema debe permitir al usuario :
//
//Ingresar valores numéricos para insertarlos en el árbol.
//
//Decidir en cada momento si desea insertar un nuevo dato o mostrar el recorrido del árbol
//
//Visualizar los datos almacenados en orden creciente al elegir el recorrido inorden.
//
//El objetivo es que el estudiante comprenda cómo se construye y recorre un árbol binario sin balance automático.
#include <iostream>
#include "Arbol.h"
using namespace std;


int main()
{
	Nodo* raiz = nullptr; //inicializamos la raiz del arbol como nula
    int opcion;
	int valor;

    cout << "Arbol!\n";
	while (opcion != 3) {
		cout << "****MENU DE OPCIONES****";
		cout << "1. Insertar Dato";

		switch (opcion) 
		{
		case 1:

		break;
		}

	};

	raiz = insertarNodo(raiz, 5); //insertamos el valor 5 en el arbol

}

