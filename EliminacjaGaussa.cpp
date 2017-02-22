// EliminacjaGaussa.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "Macierz.h"
#include <iostream>
#include <conio.h>

int main()
{
	Macierz macierz(3);
	macierz.Wyswietl();
	getch();
	macierz.Eliminacja();
	//std::system("cls");
	std::cout << "---------eliminacja---------"<<std::endl;
	macierz.Wyswietl();
	getch();
	return 0;
}

