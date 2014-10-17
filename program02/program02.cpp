#include <iostream>
#include "program02.h"

cipher::cipher(string in)
{
	input = in; 
}
void cipher::read(string given)
{
	input = given;
}
void cipher::print()
{
	cout << endl << "Ciąg znaków to: " << endl << input << endl;
}

string code(char &begin, cipher toBeCoded) // zaczyna sie od samogloski
{
	string output;
	
	for(size_t j = 0; j < toBeCoded.input.length(); j++) 
	{
		int kod = (int)toBeCoded.input[j];
		if ( kod >= 101 && kod <= 132 ) //wielkie litery
		{
			if( kod >= 131 )
			{
				kod = 141 + (kod + 42 - 172); 
			}
			else
			{
				kod += 42; 
				output[j] = (int)kod;
			}
		}
		else if ( kod >= 141 && kod <= 172 ) //małe litery 
		{
			if( kod <= 143 )
			{
				kod = 132 - (101 - (kod - 43));
			}
			else
			{
				kod -= 43;
			}
			output[j] = (int)kod;
		}
		else if ( kod >= 60 && kod <= 71 ) //cyfry 
		{
			if(kod == 71) 
				kod = 60; 
			else 
				kod += 1;
			output[j] = (int)kod;
		}
		else
		{
			output[j] = toBeCoded.input[j];
		}
	}
	cout << endl << output << endl;
	return output;
}
string code(cipher toBeCoded, char &begin) // zaczyna sie od spolgloski
{
	string output;
		
	for(size_t j = 0; j < toBeCoded.input.length(); j++) 
	{
		int kod = (int)toBeCoded.input[j];
		if ( kod >= 101 && kod <= 132 ) //wielkie litery
		{
			if( kod >= 131 )
			{
				kod = 141 + (kod + 42 - 172); 
			}
			else
			{
				kod += 42; 
				output[j] = (int)kod;
			}
		}
		else if ( kod >= 141 && kod <= 172 ) //małe litery 
		{
			if( kod <= 141 ) 
			{	
				kod = 132;
			}
			else
			{
				kod -= 41;
			}
			output[j] = (int)kod;
		}
		else if ( kod >= 60 && kod <= 71 ) //cyfry 
		{
			if(kod == 71) 
				kod = 61; 
			else if (kod == 72)
				kod = 60;
			else 
				kod += 2;
			output[j] = (int)kod;
		}
		else
		{
			output[j] = toBeCoded.input[j];
		}
	}
	cout << endl << output << endl;
	return output;
}