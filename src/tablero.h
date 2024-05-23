#pragma once
#include <iostream>


class tablero {


	int _N, _M;
	int** tab = nullptr;  // puntero doble , debe de ser de piezas 

public:
	tablero(int N = -1, int M = -1);          //valores por defector invalidos por si no inicializamos
	tablero(const tablero&) = delete;				//=delete, tablero solo hay uno
	//~matrix	(){}														

	//I/O
	std::ostream& print(std::ostream&);

	//SET
	void cell(int i, int j, int val) { tab[i][j] = val; }
	//GET
	int cell(int i, int j)	const { return tab[i][j]; }

	
private:
	void allocate();								
	void free();									

};

