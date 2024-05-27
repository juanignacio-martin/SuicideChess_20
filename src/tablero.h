#pragma once
#include <iostream>
#include "pieza.h"
#include "peon.h"
#include "torre.h"
#include "rey.h"
#include "dama.h"
#include "alfil.h"
#include "caballo.h"
#include "vacio.h"


class tablero {


	int _N, _M;
	Pieza** tab = nullptr;

public:
	tablero(int N = -1, int M = -1);
	tablero(const tablero&) = delete;				//=delete, tablero solo hay uno
	~tablero();

	//I/O
	std::ostream& print(std::ostream&);

	//SET
	void cell(int i, int j, Pieza val) { tab[i][j] = val; }
	//GET
//	int cell(int i, int j)	const { return tab[i][j]; }
	Pieza* operator[](int i);
	const Pieza* operator[](int i)const;
	
private:
	void reserva_inicializacion();								
	void liberacion();	


};
