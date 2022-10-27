#include "Talent.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

Talent::Talent()
{
	string password_t = "0";
}

int Talent::for_talent()
{
	string password_t;
	cout << "Enter Talent password (1234) :";
	cin >> password_t;

	if (password_t == "1234") {
		cout << "yes" << endl;
		//operation will be done here
	}
	else
		cout << "incorrect password" << endl;

	return 0;
}