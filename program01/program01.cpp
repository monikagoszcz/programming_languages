#include <iostream>
#include "program01.h"

using namespace std;

void komputer::dodaj()
{
	cout << "Podaj procesor: " << endl;
	cin >> procesor;
	cout << "Podaj dysk:" << endl;
	cin >> dysk;
	cout <<"Podaj pamiec:" << endl;
	cin >> pamiec;
	cout <<"Podaj ilosc" << endl;
	cin >> ilosc;
}

void komputer::wypisz()
{
	cout << endl << "Procesor: " << procesor << endl << "Dysk: " << dysk << endl << "Pamiec: " << pamiec << endl << "Ilosc: " << ilosc << endl;
}