#pragma once
#include "pieza.h"
class dama :
    public Pieza
{
public:
    dama(color col)
        :Pieza(tipo_pieza::DAMA, col)
    {}

};

