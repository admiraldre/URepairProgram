#include "Talent.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

string password_t;
string t_talent_id, t_pick;
string t_id, t_first_name, t_last_name, t_state;
float t_price, t_rating, t_location;

Talent::Talent()
{
	string password_t = "0";
}

void t_readfile()
{
	ifstream mydata;
	mydata.open("talent.dat");
	while (!mydata.eof())
	{
		mydata >> t_id >> t_first_name >> t_last_name >> t_price >> t_rating >> t_location >> t_state;

		if (t_id == t_talent_id)
		{
			cout << t_id << " " << t_first_name << " " << t_last_name << " $" << t_price << " rating :" << t_rating << " Distance: " << t_location << "km " << "is " << t_state << endl;
		}


	}
	mydata.close();
}

int Talent::for_talent()
{
	string password_t;
	cout << "Enter Talent password (1234) :";
	cin >> password_t;

	if (password_t == "1234") {
		//operation will be done here
		cout << "Enter your Talent id =";
		cin >> t_talent_id;
		cout << endl;
		cout << "1 for reading info on a talent id" << endl;
		cout << "2 for editing info on a talent id" << endl;
		cout << "choose :";
		cin >> t_pick;

		if (t_pick == "1")
		{
			t_readfile();
		}
		else if (t_pick == "2")
		{
			cout << endl;
		}
		else
			cout << "invaild chose" << endl;

	}
	else
		cout << "incorrect password" << endl;

	return 0;
}
