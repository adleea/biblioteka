// Biblioteka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Rezerwacja.h"
using namespace std;

Rezerwacja zrobRezerwacje(int ID) {
	return Rezerwacja(ID);
}

int main(){
	Rezerwacja rezerwacja1 = zrobRezerwacje(100);
	Rezerwacja rezerwacja2(300);

	int nowyStatus = rezerwacja1.pokazStatus();
	cout << nowyStatus;

	rezerwacja1.zmienStatus(4);
	rezerwacja2.zmienStatus(10);

	nowyStatus = rezerwacja1.pokazStatus();
	int nowyStatus2 = rezerwacja2.pokazStatus();
	cout << nowyStatus;
	cout << endl;
	cout << nowyStatus2;
	cout << endl;
	cout << rezerwacja2.pokazID();
	cout << endl;
	//cout << rezerwacja2.nazwaKlasy;
	cout << endl;
	cout << rezerwacja2.pokazNazwe();
	cout << endl;
    return 0;
}