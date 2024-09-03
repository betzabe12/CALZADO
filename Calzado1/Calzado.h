#pragma once

class Calzado
{
	// Definición de la clase
	// Declaración de atributos
private:
	int atributo1;
	int atributo2;  
	std::string atributo3;  
	
	// Declaración de las firmas de las funciones
public:
	void funcionPrueba();
	
	void setAtributo1(int valor);
	int getAtributo1() const;
	
	void setAtributo2(int valor);
	int getAtributo2() const;
	
	void setAtributo3(const std::string& valor);
	std::string getAtributo3() const;
};

