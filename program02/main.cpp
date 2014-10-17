#include <iostream>
#include "program02.h"

int main()
{
	cout << endl << "Wprowadz ciag znakow" << endl;
	string toBeCoded;
	cin >> toBeCoded;
	
	cipher in(toBeCoded);
	cipher coded;
	
	string vowels="aeiouAEIOU"; 
	string consonants="bcdfghjklmnpqrstwxzBCDFGHJKLMNPRQSTWXZ";
	
	char begin;
	for( size_t j = 0; j < toBeCoded.length(); j++ ) 
	{
		if ( toBeCoded[0] == vowels[j] )
		{
			begin = toBeCoded[0];
			coded.read( code( begin, in ) );
		}
		else if (toBeCoded[0] == consonants[j] ) 
		{
			begin = toBeCoded[0]; 
			coded.read( code( in, begin ) );
		}
	}
	coded.print();
	
	return 0;
}