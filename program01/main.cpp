#include <iostream>
#include <list>
#include "program01.h" 

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
	cout << endl << "Opcje wyszukiwania: 1 - procesor, 2 - dysk, 3 - pamiec, 4 - brak kryteriow wyszukiwania" << endl; 
	cin >> search;
	string opcja;
	if(search == 1)
	{
		wyszukaj(lst, "procesor");
	}
	else if(search == 2)
	{
		wyszukaj(lst, "dysk");
	}
	else if(search == 3)
	{
		wyszukaj(lst, "pamiec");
	}
	
	cout << endl << "Wybrane elementy zostaly usuniete." << endl << "Dziekujemy za skorzystanie z programu" << endl; 
	lst.clear();
	
	return 0;
}