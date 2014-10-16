#include <iostream>
#include "program01.h"

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

string komputer::wstawopcje(string opcja)
{
	if (opcja == "procesor")
	{
		return procesor;
	}
	else if (opcja == "dysk")
	{
		return dysk;
	}
	else if (opcja == "pamiec")
	{
		return pamiec;
	}
	else
	{
		return "";
	}
}

void wyszukaj(list<komputer> lista, string szukany)
{
	string dowyszukania;
	int brakwynikow = 1;
	int usunac = 0;
	
	cout << "Podaj nawze do znalezienia" << endl;
	cin >> dowyszukania;
	
	string bufor = string(dowyszukania);
	list <komputer> ::iterator i;
	list <komputer> ::iterator u;
	i = lista.begin();
	
	
	while (i != lista.end())
	{
		usunac = 0;
		if (i->wstawopcje(szukany) == bufor)
		{
			cout << "Znaleziono: " << endl;
			i->wypisz();
			brakwynikow = 0;
			
			//algorytm usuwania dziala tylko gdy chcemy usunac 1 element ze znalezionego zakresu, pytanie o usuniecie po kazdym znalezieniu elementu spelniajacego kryterium wyszukiwania - do dopracowania
			cout << endl << "Jesli chcesz usunac element z bazy wcisnij 1, jesli nie cokolwiek innego" <<endl;
			cin >> usunac;
			if(usunac == 1) 
			{
				u = i;
			}

			i++; 
		}
		else    i++;
	}
	if(i == lista.end() && brakwynikow == 1)
	{
		cout << endl << "Nie znaleziono elementu spelniajacego dane kryterium" << endl;
	}
	else
	{
		lista.erase(u);
	}

}
