#pragma once
#include <iostream>
#include <conio.h>
#include "Wektor.h"

class Macierz
{
public:
	Wektor *wektor;
	int nMacierzy;
	float **tab;
	Macierz(int nMacierzy);
	void Uzupelnij();
	void Eliminacja();
	void Wyswietl();
	~Macierz();
};

