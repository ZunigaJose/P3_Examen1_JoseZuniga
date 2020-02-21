#include <iostream>
#include <string>
#pragma once

class EjPFM {
	private: 
		string nombre, simbolo, lema;
		int ataque, defensa;


	public:
		EjPFM(string, string, string, int, int);
		string toString() {return "Nombre: " + nombre + " simbolo: " + simbolo + " lema: " + lema + " ataque: " + ataque + " Defensa: " + defensa;}
};
