#pragma once
#include <string>
using namespace std;

class GuardiaR {
	private: 
		string nombre;
		int ataque, defensa, tipo;
	public:
		GuardiaR() {};
		GuardiaR(string, const int, int, int);
		void toString();
		static const int CABALLERO = 1;
		static const int JINETE = 2;
		static const int ARQUERO = 3;
		template<class X, class Y>
                friend void simula(X, Y);
};
