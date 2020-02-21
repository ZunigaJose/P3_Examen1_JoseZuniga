#include <iostream>
#include <string>
#include "EjPFN.hpp"
#include "stark.hpp"
#include "dragon.hpp"
#include "guardiar.hpp"
#include "lannister.hpp"
#include "targaryen.hpp"
using namespace std;

void simulacion () {

}

Stark nStarks() {
	string jefe, animal, lema;
	int cant, lobos;
	cout << "Ingrese nombre del jefe: ";
	getline(cin, jefe);
	cout << "Ingrese el animal emblema: ";
	getline(cin, animal);
	cout << "Ingrese el lema: ";
	getline(cin, lema);
	cout << "Ingrese la cantdad de lobos: ";
	cin >> lobos;
	cout << "Ingrese la cantidad de miembros: ";
	cin >> cant;
	return Stark(jefe, animal, lema, lobos, cant);
}

Lannister nLani() {
	string jefe, animal, lema, fuerza;
        int cant, lobos;
        cout << "Ingrese nombre del jefe: ";
        getline(cin, jefe);
	cout << "Ingrese el animal emblema: ";
        getline(cin, animal);
	cout << "Ingrese la fuerza de la montaña: ";
	cin >> fuerza;
        cout << "Ingrese el lema: ";
        getline(cin, lema);
        cout << "Ingrese la cantdad de lobos: ";
        cin >> lobos;
        cout << "Ingrese la cantidad de miembros: ";
        cin >> cant;
        return Lannister(jefe, animal, lema, fuerza, lobos, cant);
}

Targaryen nTar() {
	string jefe, animal, lema;
        int barcos;
        cout << "Ingrese nombre de la reina: ";
        getline(cin, jefe);
        cout << "Ingrese el animal emblema: ";
        getline(cin, animal);
        cout << "Ingrese el lema: ";
        getline(cin, lema);
        cout << "Ingrese la cantdad de Barcos: ";
        cin >> barcos;
        return Targaryen(jefe, animal, lema, barcos);

}

int menu() {
	int op;
	cout << "----Menu-----";
	cout << "0. Salir\n1. Agregar Familia\n2. Agregar Ejercito\n3. Simular: ";
	cin >> op;
	if (op < 0 || op > 3) {
		return menu();
	}
	return op;
}

int main() {
	return 0;
}
