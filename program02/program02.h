#ifndef _program02_h_
#define _program02_h_
#include <string>

using namespace std;

class cipher
{
	string input;
	public:
	void read(string);
	void print();
	cipher(string in);
	cipher(){ };
	friend string code(char &begin, cipher toBeCoded);
	friend string code(cipher toBeCoded, char &begin);
};

string code(char &begin, cipher toBeCoded); // zaczyna sie od samogloski
string code(cipher toBeCoded, char &begin); // zaczyna sie od spolgloski

#endif