#ifndef LocaisNaturais_
#define LocaisNaturais_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include "Locais.h"

using namespace std;



class LocaisNaturais : public Locais
{
	private:
		double area;//em km2
	public:
		LocaisNaturais();
		LocaisNaturais(const LocaisNaturais &locNat);
		LocaisNaturais(string desc,double a);
		~LocaisNaturais();

		//SET's e GET's
		void setArea(double a);
		double getArea() const;

		//Sobrecarga de operadores
		LocaisNaturais & operator =(const LocaisNaturais &locNat);
		bool operator >(const LocaisNaturais &locNat);
		bool operator <(const LocaisNaturais &locNat);
		bool operator ==(const LocaisNaturais &locNat);
		void escrever(ostream &out) const;
		LocaisNaturais &operator = (const LocaisNaturais &locNat);



};


LocaisNaturais::LocaisNaturais()
{
	area = 0;
}


LocaisNaturais::LocaisNaturais(string desc,double a) : Locais(desc)//desc=descri��o - variavel da superclasse Locais
{
	area = a;
}

LocaisNaturais::~LocaisNaturais(){}


LocaisNaturais::LocaisNaturais(const LocaisNaturais &locNat)
{
	setArea(locNat.area);
}

void LocaisNaturais::setArea(double a)
{
	area = a;
}

double LocaisNaturais::getArea()const
{
	return area;
}





#endif
