// miasta.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//
// Tresc zadania:
//http://new.zsd.iiar.pwr.wroc.pl/educ.php?lid=132&zid=GAPITSP

#include "stdafx.h"

#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	int wynik=0;
	int ilosc_miast;
	int wektor[1][10];
	int liczby[9][9];
	int i, j, k;
	fstream plik;
	plik.open("miasta.txt", ios::in);
	
	if (plik.good() == true) {
		plik >> ilosc_miast;
		//cout << ilosc_miast << endl;
		for (j = 0; j < ilosc_miast; j++)
		{
			for (i = 0; i < ilosc_miast; i++)
			{
				plik >> liczby[j][i];
			}
		}			
		for (k = 0; k < ilosc_miast+1; k++) {
			plik >> wektor[0][k];

		}
	}
	else {

		cout << "nie ma takiego pliku" << endl;
		exit(0);
	}
	
	plik.close();
	/*
	for (j = 0; j < ilosc_miast; j++)
	{
		for (i = 0; i < ilosc_miast; i++)
		{
			cout << " " << liczby[j][i];
		}
		cout << endl;
	}
	
	for (k = 0; k < ilosc_miast+1; k++)
	{
		
			cout << " " << wektor[0][k];
		
	} 
	 cout << endl;
	for (k = 0; k < ilosc_miast; k++) {
		cout<< wektor[0][k]<<" "<<wektor[0][k + 1]<<endl;
	}
	cout << endl << endl << endl;
	
	cout << liczby[wektor[0][0]][wektor[0][1]] << endl;
	cout << liczby[wektor[0][1]][wektor[0][2]] << endl;
	cout << liczby[wektor[0][2]][wektor[0][3]] << endl;
	cout << liczby[wektor[0][3]][wektor[0][4]] << endl;
	cout << liczby[wektor[0][4]][wektor[0][5]] << endl;
	cout << liczby[wektor[0][5]][wektor[0][6]] << endl;
	cout << liczby[wektor[0][6]][wektor[0][7]] << endl;
	cout << liczby[wektor[0][7]][wektor[0][8]] << endl;
	cout << liczby[wektor[0][8]][wektor[0][9]] << endl<<endl;
	*/
	for (k = 0; k < ilosc_miast; k++) {
		wynik += liczby[wektor[0][k]][wektor[0][k + 1]];
		//cout << liczby[wektor[0][k]][wektor[0][k + 1]] << endl;
	}
	cout << endl;

	fstream plik1;
	plik1.open("wynik.txt", ios::out | ios::app);
	plik1 << wynik << endl;
	plik1.close();


	system("pause");
    return 0;
}

