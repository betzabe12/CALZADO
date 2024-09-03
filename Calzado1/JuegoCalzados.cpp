#include <iostream>
#include "Calzado.h";
#include "ManejadorCalzado.h";
int main()
{
    
    //declaracion de los objetos
	Calzado calzado1, calzado2;
	ManejadorCalzado manejador;
	
	calzado1.setAtributo1(10);
	calzado1.setAtributo2(20);
	calzado1.setAtributo3("Zapato izquierdo");
	
	calzado2.setAtributo1(15);
	calzado2.setAtributo2(25);
	calzado2.setAtributo3("Zapato derecho");
    //implementacion de la logica utilizando la clase ManejadorCalzado
	manejador.agregarCalzado(calzado1);
	manejador.agregarCalzado(calzado2);
	
	manejador.mostrarCalzados();
	

    std::cout << "Juego de Calzados, Adivina los pares!!\n";
	return 0;
}


