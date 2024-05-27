#pragma once
#include "pieza.h"
class caballo :
    public Pieza
{
public:
    caballo(color col)
        :Pieza(tipo_pieza::CABALLO, col)
    {}
  
};

