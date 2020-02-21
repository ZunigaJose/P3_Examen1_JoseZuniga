#include "EjPFN.hpp"
#include <string>
using namespace std;

EjPFN::EjPFN(string nom, string sim, string lem, int at, int df) {
	nombre = nom;
	simbolo = sim;
	lema = lem;
	ataque = at;
	defensa = df;
}

void EjPFN::toString() {
	cout << "Nombre: " << nombre << " simbolo: " <<  simbolo << " lema: " << lema << " ataque: " << ataque << " Defensa: " << defensa;
}
