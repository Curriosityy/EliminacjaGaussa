#pragma once
#include <iostream>
class Wektor
{
public:
	float *tabVec;
	int nRozmiar;
	Wektor(int nRozmiar);
	void Uzupelnij(int ity);
	void Eliminacja(int i,int z,float dzialanie);
	~Wektor();
};

