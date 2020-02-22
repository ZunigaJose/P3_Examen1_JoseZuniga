#pragma once
#include <string>
#include <vector>
#include "dragon.hpp"
using namespace std;

class Targaryen {
	
	private: 
		string reina, animal, lema;
		int nBarcos;
		vector <Dragon> ejercito;
	public:
		Targaryen() {};
		Targaryen(string, string, string, int);
		void setEjercito(Dragon ej) {ejercito.push_back(ej); }
		int size() { return ejercito.size(); }
		void imprimir();
		friend void simula();
};
