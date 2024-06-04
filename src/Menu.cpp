#include "Menu.h"
#include"freeglut.h"
#include"ETSIDI.h"

Menu::Menu() :opcion(0), inicio(0)	//CONSTRUCTOR
{
	menu1->setSize(10.0, 10.0);
	menu1->setPos(4.0, 4.0);

	menu2->setSize(10.0, 10.0);
	menu1->setPos(4.0, 4.0);
}




void Menu::tecla(int key) 
{
	switch (key)
	{
	case GLUT_KEY_RIGHT:					//derecha = salir
		opcion = 2;
		break;

	case GLUT_KEY_LEFT:					//izquierda = jugar
		opcion = 1;
	}

}

void Menu::dibuja()			//Metodo de 
{
	if (inicio == 0 && opcion == 1)						
		menu1->draw();							//PORTADA1

	if (inicio = 0 && opcion == 2)
		menu2->draw();							//PORTADASALIR

}