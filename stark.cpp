#include "stark.hpp"
#include <string>
using namespace std;

Stark::Stark(string jef, string anim, string lem, int lob, int miem) {
	jefe = jef;
	animal = anim;
	lema = lem;
	nLobos = lob;
	nIntegrantes = miem;
}

void Stark::imprimir() {
	for(int i = 0; i < ejercito.size(); i++) {
		ejercito[i].toString();
	}	
}
