#include "Wektor.h"


Wektor::Wektor(int nRozmiar)
{
	this->nRozmiar = nRozmiar;
	tabVec = new float[nRozmiar];
}


Wektor::~Wektor()
{}

void Wektor::Uzupelnij(int ity)
{
		std::cin >> tabVec[ity];
}
void Wektor::Eliminacja(int i,int z,float dzialanie)
{
	tabVec[i] = tabVec[i] + dzialanie*tabVec[z];
}


