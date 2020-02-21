#include <string>
#include <iostream>
#include "dragon.hpp"
using namespace std;

Dragon::Dragon(string nom, string col, int tam, int dis, int at, int df) {
	nombre = nom;
	color = col;
	tamanio = tam;
	distancia = dis;
	ataque = at;
	defensa = df;
}

void Dragon::toString() {
	cout << "Nombre: " << nombre << "Color: " << color << "Tamaño: " << tamanio;
	cout << "Distancia Llama: " << distancia << "Ataque: " << ataque << "Defensa: " << defensa << endl;
}
