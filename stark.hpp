#pragma once
#include <string>
#include <vector>
#include "EjPFN.hpp"
using namespace std;

class Stark {
	private:
		string jefe, animal, lema;
		int nLobos, nIntegrantes;
		vector <EjPFN> Ejercito;

	public:
		Stark() { };
		Stark(string, string, string, int, int);
		void setEjercito(EjPFN ej) { Ejercito.push_back(ej); }
		
};
