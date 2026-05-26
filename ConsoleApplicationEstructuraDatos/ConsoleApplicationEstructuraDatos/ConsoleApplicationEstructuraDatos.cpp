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
    int opcion = 0;
	int valor;

	while (opcion != 5) {
		system("cls");
		cout << "\n****MENU DE OPCIONES****\n";
		cout << "1. Insertar Dato\n";
		cout << "2. Imprimir Inorder\n";
		cout << "3. Imprimir Preorden\n";
		cout << "4. Imprimir Postorden\n";
		cout << "5. Salir\n";
		cin >> opcion;

		switch (opcion) 
		{
		case 1:
			system("cls");
			cout << "\nDigite el dato que desea insertar\n";
			cin >> valor;
			raiz = insertarNodo(raiz,valor);
			cout << "\nDato " << valor << " insertado!\n";
			system("pause");
			break;
		case 2:
			system("cls");
			cout << "\nImprimir Inorder\n";
			inorden(raiz);
			cout << "\n";
			system("pause");
			break;
		case 3:
			system("cls");
			cout << "\nImprimir Preorden\n";
			preorden(raiz);
			cout << "\n";
			system("pause");
			break;
		case 4:
			system("cls");
			cout << "\nImprimir Postorden\n";
			postorden(raiz);
			cout << "\n";
			system("pause");
			break;
		case 5:
			cout << "Saliendo del programa";
			break;
		default:
			cout << "Opcion Invalida";
			break;
		}
	};

	//raiz = insertarNodo(raiz, 5); //insertamos el valor 5 en el arbol

}

