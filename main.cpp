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

EjPFN nPF() {
	string nom, sim, lem;
	int at, df;
	cout << "Ingrese el nombre: ";
	getline(cin, nom);
	cout << "Ingrese el simbolo: ";
	getline(cin, sim);
	cout << "Ingrese el lema; ";
	getline(cin, lem);
	cout << "Ingrese el ataque: ";
	cin >> at;
	cout << "Ingrese la defensa: ";
	cin >> df;
	return EjPFN(nom,sim, lem, at, df);
}

Dragon nDrag() {
	string nom, col;
       	int tam, dis, at, df;
        cout << "Ingrese el nombre: ";
        getline(cin, nom);
        cout << "Ingrese el color: ";
        getline(cin, col);
        cout << "Ingrese el tamaño: ";
        cin >> tam;
	cout << "Ingrese la distancia de la llama: ";
	cin >> dis;
        cout << "Ingrese el ataque: ";
        cin >> at;
        cout << "Ingrese la defensa: ";
        cin >> df;
	return Dragon(nom, col, tam, dis, at, df);
}
int mTipo() {
	int op;
	cout << "1. Caballero\n2. Jinete\n3. Arquero: ";
	cin >> op;
	if (op < 1 || op > 3) 
		return mTipo();
	return op;
}

GuardiaR nGuardia() {
	string nom;
       	int tip, at, df;
	cout << "Ingrese el nombre: ";
	cin >> nom;
	tip = mTipo();
	cout << "Ingrese el ataque: ";
        cin >> at;
        cout << "Ingrese la defensa: ";
        cin >> df;
	switch (tip) {
		case 1: return Guardia(nom, GuardiaR::CABALLERO, at, df);
		case 2: return Guardia(nom, GuardiaR::JINETE, at, df);
		case 3: return Guardia(nom, GuardiaR::ARQUERO, at, df);
	}
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
