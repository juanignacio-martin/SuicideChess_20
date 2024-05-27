#pragma once
#include"ETSIDI.h"
#include <vector>
#include <iostream>

enum class tipo_pieza { TORRE, CABALLO, ALFIL, DAMA, REY, PEON,VACIO};
enum class color{ BLANCO,NEGRO};

class Pieza {
public:
    
    Pieza(tipo_pieza tip = tipo_pieza::VACIO, color col = color::BLANCO) :
        tipo(tip),col(col)
    {}


    virtual ~Pieza() {}//declaracion destructor virtual de la clase pieza
  //  virtual bool MovimientoValido(int X_origen, int Y_origen, int X_destino, int Y_destino) ;//Define una funcion miembro virtual para definir si el movimiento es valido o no
  //  void setPos(int x, int y);//funcion que defina las coordenadas de la pieza
  //  int getColor() const;//color const pq no puede modificar lo definido
  //  virtual void mueve(int x, int y) ;
    
    friend std::ostream& operator<<(std::ostream& os, const Pieza& pieza);



protected:

    tipo_pieza tipo;
    color col;

};
