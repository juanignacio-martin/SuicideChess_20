#include "tablero.h"


using namespace std;


tablero::tablero(int N, int M) :
	_N(N),
	_M(M)
{
	if (N > 0 && M > 0) { allocate(); }
	else { _N = 0, _M = 0;  cout << "error en la dimension de la matriz" << endl; }
}


void tablero::allocate()
{
	tab = new int* [_N];
	for(int i=0;i<_N;i++){
		tab[i] = new int[_M];
	}
}
tablero::~tablero() {
	free();
}

void tablero::free()

{
	if (tab != nullptr) {
		for (int i = 0; i < _N; ++i) {
			delete[] tab[i]; // libera cada fila
		}
		delete[] tab; // liberar el vector de punteros
		tab = nullptr;
	}
}

ostream& tablero::print(ostream& o)

{
	for (int i = 0; i < _N; i++) {
		for (int j = 0; j < _M; j++) {
			o << tab[i][j] << " ";
		}
		o << endl;
	}

	return o;
}



