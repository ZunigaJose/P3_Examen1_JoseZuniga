#pragma once
#include <string>
#include <vector>
#include "guardiar.hpp"

using namespace std;

class Lannister {
	private: 
		string jefe, animal, lema, fuerza;
		int dinero, miembros;
		vector <GuardiaR> ejercito;

	public:
		Lannister() {};
		Lannister(string, string, string, string, int, int);
		void setEjercito(GuardiaR ej) {ejercito.push_back(ej);}
		int size() { return ejercito.size(); }
		void imprimir();
		template<class X, class Y>
		friend void simula(X, Y);
};
