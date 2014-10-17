#ifndef _program02_h_
#define _program02_h_
#include <string>

using namespace std;

class cipher
{
		string input;
	public:
		cipher(){ };
		cipher(string in);
		void read(string);
		void print();
		friend string code(char &begin, cipher toBeCoded);
		friend string code(cipher toBeCoded, char &begin);
};

string code(char &begin, cipher toBeCoded); // zaczyna sie od samogloski
string code(cipher toBeCoded, char &begin); // zaczyna sie od spolgloski

#endif