#include <string>
#include "lannister.hpp"
using namespace std;

Lannister::Lannister(string jf, string ani, string lem, string fue, int din, int mi) {
	jefe = jf;
	animal = ani;
	lema = lem;
	fuerza = fue;
	dinero = din;
	miembros = mi;
}

void Lannister::imprimir() {
	for(int i = 0; i < ejercito.size(); i++) {
		ejercito[i].toString();
	}
}
