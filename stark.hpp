#pragma once
#include <string>
#include <vector>

class Stark {
	private:
		string jefe, animal, lema;
		int nLobos, nIntegrantes;
		vector <EjPFM> Ejercito;

	public:
		Stark() { };
		Stark(string, string, string, int, int);
		void setEjercito(EjPFm ej) { Ejercito.push_back(ej); }
		
};
