#include "targaryen.hpp"
#include <string>
using namespace std;

Targaryen::Targaryen(string rei, string ani, string lem, int barc) {
	reina = rei;
	animal = ani;
	lema = lem;
	nBarcos = barc;	
}

void Targaryen::imprimir() {
	for(int i = 0; i < ejercito.size(); i++) {
		ejercito[i].toString();
	}
}
