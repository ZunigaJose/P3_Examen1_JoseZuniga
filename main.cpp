#include <iostream>
#include <string>
#include "EjPFN.hpp"
#include "stark.hpp"
#include "dragon.hpp"
#include "guardiar.hpp"
#include "lannister.hpp"
#include "targaryen.hpp"
using namespace std;

Stark starks;
Lannister lani;
Targaryen tar;

template<class x, class y>
void simula() {
	if(!(x::template ejercito.empty()) || !(y::template ejercito.empty())) {
		
	} else {
		cout << "Alguno de los dos no tiene ejercito aun!!!";
	}
} 

void nStarks() {
	string jefe, animal, lema;
	int cant, lobos;
	cout << "Ingrese nombre del jefe: ";
	cin.ignore();
	getline(cin, jefe);
	cout << "Ingrese el animal emblema: ";
	cin.ignore();
	getline(cin, animal);
	cout << "Ingrese el lema: ";
	cin.ignore();
	getline(cin, lema);
	cout << "Ingrese la cantdad de lobos: ";
	cin >> lobos;
	cout << "Ingrese la cantidad de miembros: ";
	cin >> cant;
	starks = Stark(jefe, animal, lema, lobos, cant);
}

void nLani() {
	string jefe, animal, lema, fuerza;
        int cant, lobos;
        cout << "Ingrese nombre del jefe: ";
	cin.ignore();
        getline(cin, jefe);
	cout << "Ingrese el animal emblema: ";
	cin.ignore();
        getline(cin, animal);
	cout << "Ingrese la fuerza de la montaña: ";
	cin.ignore();
	cin >> fuerza;
        cout << "Ingrese el lema: ";
	cin.ignore();
        getline(cin, lema);
        cout << "Ingrese la cantdad de lobos: ";
        cin >> lobos;
        cout << "Ingrese la cantidad de miembros: ";
        cin >> cant;
        lani = Lannister(jefe, animal, lema, fuerza, lobos, cant);
}

void nTar() {
	string jefe, animal, lema;
        int barcos;
        cout << "Ingrese nombre de la reina: ";
	cin.ignore();
        getline(cin, jefe);
        cout << "Ingrese el animal emblema: ";
	cin.ignore();
        getline(cin, animal);
        cout << "Ingrese el lema: ";
	cin.ignore();
        getline(cin, lema);
        cout << "Ingrese la cantdad de Barcos: ";
        cin >> barcos;
        tar = Targaryen(jefe, animal, lema, barcos);
}

void nPF() {
	if(starks.size() <= 10) {
		string nom, sim, lem;
		int at, df;
		cout << "Ingrese el nombre: ";
		cin.ignore();
		getline(cin, nom);
		cout << "Ingrese el simbolo: ";
		cin.ignore();
		getline(cin, sim);
		cout << "Ingrese el lema; ";
		cin.ignore();
		getline(cin, lem);
		cout << "Ingrese el ataque: ";
		cin >> at;
		cout << "Ingrese la defensa: ";
		cin >> df;
		starks.setEjercito(EjPFN(nom,sim, lem, at, df));
	} else {
		cout << "Ya hay 10!" << endl;
	}
}

void nDrag() {
	if(tar.size() <= 10) {
		string nom, col;
	       	int tam, dis, at, df;
        	cout << "Ingrese el nombre: ";
		cin.ignore();
	        getline(cin, nom);
	        cout << "Ingrese el color: ";
		cin.ignore();
	        getline(cin, col);
        	cout << "Ingrese el tamaño: ";
	        cin >> tam;
		cout << "Ingrese la distancia de la llama: ";
		cin >> dis;
	        cout << "Ingrese el ataque: ";
	        cin >> at;
        	cout << "Ingrese la defensa: ";
	        cin >> df;
		tar.setEjercito(Dragon(nom, col, tam, dis, at, df));
	} else {
		cout << "Ya hay 10!" << endl;
	}
}

int mTipo() {
	int op;
	cout << "1. Caballero\n2. Jinete\n3. Arquero: ";
	cin >> op;
	if (op < 1 || op > 3) 
		return mTipo();
	return op;
}

void nGuardia() {
	if (lani.size() <= 10) {
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
			case 1: lani.setEjercito(GuardiaR(nom, GuardiaR::CABALLERO, at, df));
				break;
			case 2:  lani.setEjercito(GuardiaR(nom, GuardiaR::JINETE, at, df));
				 break;
			case 3: lani.setEjercito(GuardiaR(nom, GuardiaR::ARQUERO, at, df));
				break;
		}
	}
}

int menu() {
	int op;
	cout << "----Menu-----";
	cout << "0. Salir\n1. Agregar Familia\n2. Agregar Ejercito\n3. Listar\n4. Simular: ";
	cin >> op;
	if (op < 0 || op > 3) {
		return menu();
	}
	return op;
}

int cualFamilia() {
	int op;
	cout << "------Familia-------" << endl;
	cout << "1. Starks\n2. Lannister\n3. Targaryen: ";
	cin >> op;
	if (op < 1 || op > 3) 
		return cualFamilia();
	return op;
}

int main() {
	int op, subOp;
	do {
	op = menu();
	switch (op) {
		case 1:
			subOp = cualFamilia();
			switch (subOp) {
				case 1:
					nStarks();
				break;
				case 2: 
					nLani();
				break;
				case 3:
					nTar();
				break;
			}
		break;
		case 2:
			subOp = cualFamilia();
			switch (subOp) {
				case 1: 
					nPF();
				break;
				case 2:
					nDrag();
				break;
				case 3:
					nGuardia();
				break;
			}
		break;
		case 3: 
			subOp = cualFamilia();
			switch(subOp) {
				case 1:
					starks.imprimir();
				break;
				case 2: 
					tar.imprimir();
				break;
				case 3:
					lani.imprimir();
			}
		break;
		case 4:
		
		break;
		}
	} while (op);
	return 0;
}
