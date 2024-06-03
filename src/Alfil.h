#pragma once
#include "Pieza.h"
#include<tablero.h>

class Alfil:public Pieza
{
public:
    Alfil(color col)
        :Pieza(tipo_pieza::ALFIL, col)
    {}
    bool validarMovimiento(Vector origen, Vector destino, tablero& t);
};