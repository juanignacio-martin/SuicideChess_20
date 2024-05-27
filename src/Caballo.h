#include "ETSIDI.h"
#include "Pieza.h"
#include <Vector>
#include <iostream>

class Caballo :public Pieza
{
public:
	Caballo();//constructor
	~Caballo();//destructor
	void dibuja();
	int getColor() { return Color; }
	void movimientovalido(int origen, int destino, bool& b);
};
