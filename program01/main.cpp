#include <iostream>
#include <list>
#include "program01.h" 

using namespace std;

int main()
{
	komputer baza[3];
	for(int i = 0; i < 3; i++)
	{
		baza[i].dodaj();
	}
	
	list<komputer>lst;
	
	for(int i = 0; i < 3; i++)
	{
		lst.push_back(baza[i]);
	}
	
	list<komputer>::iterator j;
	
	for(j = lst.begin(); j !=lst.end(); j++)
	{
		j->wypisz();
	}
	
	return 0;
}