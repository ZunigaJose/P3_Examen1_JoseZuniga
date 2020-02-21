#pragma once
#include <string>
using namespace std;

class GuardiaR {
	static const int CABALLERO = 1;
	static const int JINETE = 2;
	static const int ARQUERO = 3;
	private: 
		string nombre;
		int ataque, defensa, tipo;
	public:
		GuardiaR() {};
		GuardiaR(string, const int, int, int);
		void toString();
};
