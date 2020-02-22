#pragma once
#include <string>
#include <vector>
#include "EjPFN.hpp"
using namespace std;

class Stark {
	private:
		string jefe, animal, lema;
		int nLobos, nIntegrantes;
		vector <EjPFN> ejercito;

	public:
		Stark() { };
		Stark(string, string, string, int, int);
		void setEjercito(EjPFN ej) { ejercito.push_back(ej); }
		int size() { return ejercito.size(); }
		void imprimir();
		template<class X, class Y>
		friend void simula(X, Y);	
};
