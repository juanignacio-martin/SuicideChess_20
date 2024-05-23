#pragma once
#include"ETSIDI.h"
#include <vector>
#include <iostream>

class Pieza{
public:
	enum class COLOR {BLANCA, NEGRA};//Define Color
	enum class TIPO { PEON = 0, TORRE, CABALLO, ALFIL, REINA, REY };//Define Tipo de pieza    
    Pieza(const char* texturePath, COLOR color, TIPO type);//Constructor de una pieza
    virtual ~Pieza() {}//declaracion destructor virtual de la clase pieza
    virtual bool MovimientoValido(int X_origen, int Y_origen, int X_destino, int Y_destino) const = 0;//Define una funcion miembro virtual para definir si el movimiento es valido o no
    void dibuja() const;//Funcion que dibuja las piezas
    void setPos(int x, int y);//funcion que defina las coordenadas de la pieza
    COLOR getColor() const;//color const pq no puede modificar lo definido
    TIPO getTipo() const;//


protected:
    ETSIDI::Sprite sprite;//Uso librerias etsidi,sprite : rectangulo con textura que facilita el dibujo y animaci�n en pantalla
    int posX, posY;
    COLOR color;
    TIPO type;
	
};
