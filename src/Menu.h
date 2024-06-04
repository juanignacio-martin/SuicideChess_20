#pragma once
#include"ETSIDI.h"

using ETSIDI::Sprite;

class Menu
{
	Sprite* menu1 = new Sprite("imagenes/PORTADA1.jpg", 4.0, 4.0, 10.0, 10.0);				//Configuracion inicial
	Sprite* menu2 = new Sprite("imagenes/PORTADASALIR.jpg", 4.0, 4.0, 10.0, 10.0);


	int opcion;
	int inicio;
public:
	Menu();
	~Menu();

	void dibuja();
	void tecla(int key);
};

