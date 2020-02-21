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


int main() {
	return 0;
}
