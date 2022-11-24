#include "Admin.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

string password_a;
string a_talent_id, a_pick;
string a_id, a_first_name, a_last_name, a_state, a_email;
float a_price, a_rating, a_location;

Admin::Admin() {
	string password_a = "0";
}

void a_readfile()
{
	ifstream mydata;
	mydata.open("talent.dat");
	while (!mydata.eof())
	{
		mydata >> a_id >> a_first_name >> a_last_name >> a_price >> a_rating >> a_location >> a_state >> a_email;

		if (a_id == a_talent_id)
		{
			cout << a_id << " " << a_first_name << " " << a_last_name << " $" << a_price << " rating :" << a_rating << " Distance: " << a_location << "km " << "is " << a_state << " Email :" << a_email << endl;
		}


	}
	mydata.close();
}

void a_chgfile()
{
	fstream mydata;
	mydata.open("talent.dat");
	while (!mydata.eof())
	{
		mydata >> a_id >> a_first_name >> a_last_name >> a_price >> a_rating >> a_location >> a_state >> a_email;

		if (a_id == a_talent_id)
		{
			cout << a_id << " " << a_first_name << " " << a_last_name << " $" << a_price << " rating :" << a_rating << " Distance: " << a_location << "km " << "is " << a_state << " Email :" << a_email << endl;

			cout << "New price: ";
			cin >> a_price;
			cout << "New location: ";
			cin >> a_location;
			cout << "(Available or Booked ): ";
			cin >> a_state;
			cout << "New email: ";
			cin >> a_email;
		}

	}
		mydata.close();
}

int Admin::for_admin()
{

	cout << "Enter Admin password (1234) :";
	cin >> password_a;

	if (password_a == "1234") {
		//operation will be done here
		cout << "Enter id of Talent to be manipulated =";
		cin >> a_talent_id;
		cout << endl;
		cout << "1 for reading info on a talent id" << endl;
		cout << "2 for editing info on a talent id" << endl;
		cout << "choose :";
		cin >> a_pick;

		if (a_pick == "1")
		{
			a_readfile();
		}
		else if (a_pick == "2")
		{
			cout << endl;
			a_chgfile();
		}
		else
			cout << "invaild chose" << endl;



	}
	else
		cout << "incorrect password" << endl;


	return 0;
}
