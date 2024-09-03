// Calzado1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Calzado.h>
#include<ManejodorCalzado.h>
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

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
