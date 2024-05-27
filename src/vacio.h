#pragma once
#include "pieza.h"
class vacio :public Pieza
{
public:

    vacio(color col)
        :Pieza(tipo_pieza::VACIO, col)
    {}
};

