#ifndef _program01_h_
#define _program01_h_
#include <string>
#include <list>

using namespace std;

class komputer
{
	
	string procesor;
	string dysk;
	string pamiec;
	int ilosc;
	public:
	void dodaj();
	void wypisz();
	string wstawopcje(string opcja);
};
void wyszukaj(list<komputer> lista, string szukany);

#endif 
