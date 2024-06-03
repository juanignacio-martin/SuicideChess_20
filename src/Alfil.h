#pragma once
#include "Pieza.h"
#include<tablero.h>
#include <vector2d.h>

class Alfil:public Pieza
{
public:
    Alfil(color col)
        :Pieza(tipo_pieza::ALFIL, col)
    {}
    bool validarMovimiento(Vector2D origen,Vector2D destino, tablero& t);
};