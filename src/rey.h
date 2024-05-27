#pragma once
#include "pieza.h"
class rey :  public Pieza
{
public:
    rey(color col)
        :Pieza(tipo_pieza::REY, col)
    {}

};

