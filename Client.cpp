#include "Client.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

Client::Client() {
	string password_c = "0";
}

int Client::for_client()
{
	string password_c;
	cout << "Enter Client password (1234) :";
	cin >> password_c;

	if (password_c == "1234") {
		cout << "yes" << endl;
		//operation will be done here
	}
	else
		cout << "incorrect password" << endl;

	return 0;
}