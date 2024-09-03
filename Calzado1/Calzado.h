#pragma once

class Calzado
{
	// Definici�n de la clase
	// Declaraci�n de atributos
private:
	int atributo1;
	int atributo2;  
	std::string atributo3;  
	
	// Declaraci�n de las firmas de las funciones
public:
	void funcionPrueba();
	
	void setAtributo1(int valor);
	int getAtributo1() const;
	
	void setAtributo2(int valor);
	int getAtributo2() const;
	
	void setAtributo3(const std::string& valor);
	std::string getAtributo3() const;
};

