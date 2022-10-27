#include "Admin.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

Admin::Admin() {
	string password_a = "0";
}

int Admin::for_admin()
{
	string password_a;
	cout << "Enter Admin password (1234) :";
	cin >> password_a;

	if (password_a == "1234") {
		cout << "yes" << endl;
		//operation will be done here
	}
	else
		cout << "incorrect password" << endl;

	return 0;
}