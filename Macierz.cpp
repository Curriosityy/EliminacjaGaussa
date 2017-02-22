#include "Macierz.h"

Macierz::Macierz(int nMacierzy)
{
	this->nMacierzy = nMacierzy;
	tab = new float*[nMacierzy];
	for (int i = 0; i < nMacierzy; i++)
		tab[i] = new float[nMacierzy];
	wektor = new Wektor(nMacierzy);
	Uzupelnij();

}

Macierz::~Macierz()
{
	for (int i = 0; i < nMacierzy; i++)
		delete[] tab[i];
	delete[] tab;
}

void Macierz::Uzupelnij()
{
	for (size_t i = 0; i < nMacierzy; i++)
	{
		for (size_t j = 0; j < nMacierzy; j++)
		{
			std::cin >> tab[i][j];
		}
		wektor->Uzupelnij(i);
	}
}

void Macierz::Eliminacja()
{
	for (size_t z = 0; z < nMacierzy-1; z++)
	{
		for (size_t i = z+1; i < nMacierzy; i++)
		{
			float temp = -tab[i][z]/ tab[z][z];
			for (size_t j = 0; j < nMacierzy; j++)
			{
				tab[i][j] = tab[i][j] + (temp*tab[z][j]);
			}
			wektor->Eliminacja(i,z,(temp));
		}
	}
}
void Macierz::Wyswietl()
{
	for (size_t i = 0; i < nMacierzy; i++)
	{
		for (size_t j = 0; j < nMacierzy; j++)
		{
			std::cout << tab[i][j] << " ";
		}
		std::cout << wektor->tabVec[i];
		std::cout << std::endl;
	}
}