#include <string>
#pragma once
using namespace std;

class Dragon {
	private: 
		string nombre, color;
		int tamanio, distancia, ataque, defensa;
	public:
		Dragon() {};
		Dragon(string, string, int, int, int, int);
		template<class X, class Y>
                friend void simula(X, Y);
		void toString();
};

