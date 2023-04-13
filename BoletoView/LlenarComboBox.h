#pragma once
using namespace System;

public ref class  Item
{
public:
	String^ Nombre;
	int Valor;
	
	Item(String^ Nombre, int Valor) {
		this->Nombre = Nombre;
		this->Valor = Valor;
	}
	
	//~Item();

	String^ ToString() override{
		//return this->Valor + " " + this->Nombre;
		return this->Nombre;
	}
};
