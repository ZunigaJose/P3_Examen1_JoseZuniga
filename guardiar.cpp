#include"guardiar.hpp"
#include <string>
#include <iostream>

using namespace std;

GuardiaR::GuardiaR(string nom, int tip, int at, int df) {
	nombre = nom;
	tipo = tip;
	ataque = at;
	defensa = df;
}

void GuardiaR::toString() {
	cout << "Nombre: " << nombre << " Tipo: ";
	switch (tipo) {
		case 1: cout << "Caballero ";
		break;
		case 2: cout << "Jinete ";
		break;
		case 3: cout << "Arquero ";
		break;
	}
	cout << " Ataque: " << ataque; 
	cout << " Defensa: " << defensa << endl;
}
