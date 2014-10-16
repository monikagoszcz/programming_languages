#include <iostream>
#include <list>
#include "program01.h" 

void wyszukaj(list <komputer> lista, string szukany)
{
	string bufor;
	cout << "Podaj nawze do znalezienia" << endl;
	cin >> bufor;
	list <komputer> ::iterator i;
	i = lista.begin();
	while(i != lista.end())
	{
		if(i->szukany == bufor)
		{
			cout<<"znaleziono"<<endl;
			break;
		}
		else    i++;
	}
	if(i == lista.end())
		cout << "NIE ZNALEZIONO NAZWISKA" << endl;
}

int main()
{
	komputer baza[3];
	for(int i = 0; i < 3; i++)
	{
		baza[i].dodaj();
	}
	
	list <komputer> lst;
	
	for(int i = 0; i < 3; i++)
	{
		lst.push_back(baza[i]);
	}
	
	list <komputer> ::iterator j;
	
	for(j = lst.begin(); j !=lst.end(); j++)
	{
		j->wypisz();
	}
	
	// menu wyszukiwania 
	int search; 
	cout << endl << "Opcje wyszukiwania: 1 - procesor, 2 - dysk, 3 - pamiec, 4 - ilosc, 5 - brak kryteriow wyszukiwania" << endl; 
	cin >> search;
	
	
	wyszukaj(lst, procesor);

	lst.clear();
	
	return 0;
}