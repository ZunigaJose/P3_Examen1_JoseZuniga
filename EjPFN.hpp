#include <iostream>
#include <string>
#pragma once
using namespace std;

class EjPFN {
	private: 
		string nombre, simbolo, lema;
		int ataque, defensa;


	public:
		EjPFN(){ };
		EjPFN(string, string, string, int, int);
		void toString();
};
