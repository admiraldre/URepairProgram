#include "Admin.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdio.h>
using namespace std;

string password_a;
string a_talent_id, a_pick, a_textline;
string a_id, a_first_name, a_last_name, a_state, a_email, a_services;
float a_price, a_rating;

Admin::Admin() {
	string password_a = "0";
}

void a_readfile()
{
	ifstream mydata;
	mydata.open("talent.dat");
	while (mydata >> a_id >> a_first_name >> a_last_name >> a_price >> a_rating >> a_services >> a_state >> a_email)
	{
		

		if (a_id == a_talent_id)
		{
			cout << a_id << " " << a_first_name << " " << a_last_name << " $" << a_price << " rating :" << a_rating << " Services: " << a_services << " " << "is " << a_state << " Email :" << a_email << endl;
		}


	}
	mydata.close();
}

void a_chgfile()
{
	ifstream mydata;
	mydata.open("talent.dat");
	ofstream c_data;
	c_data.open("c_talent.dat");
	while (mydata >> a_id >> a_first_name >> a_last_name >> a_price >> a_rating >> a_services >> a_state >> a_email)
	{

		if (a_id != a_talent_id)
		{
			c_data << a_id << " " << a_first_name << " " << a_last_name << " " << a_price << " " << a_rating << " " << a_services << " " << a_state << " " << a_email << endl;
			
		}
		else
		{
			c_data.close();
			c_data.open("c_talent.dat", std::ios::app);
			cout << a_id << " " << a_first_name << " " << a_last_name << " $" << a_price << " rating :" << a_rating << " Services: " << a_services << " " << "is " << a_state << " Email :" << a_email << endl;

			cout << "New price: ";
			cin >> a_price;
			cout << "New Services: ";
			cin >> a_services;
			cout << "(Available or Booked ): ";
			cin >> a_state;
			cout << "New email: ";
			cin >> a_email;
			std::ostringstream text_join;
			text_join << a_id << " " << a_first_name << " " << a_last_name << " " << a_price << " " << a_rating << " " << a_services << " " << a_state << " " << a_email << endl;
			std::string a_textline = text_join.str();
			c_data << a_textline;
		}

	}

		mydata.close();
		c_data.close();

		//std::rename("c_talent.dat", "talent.dat");

		ifstream in("c_talent.dat");
		ofstream out1("talent.dat");

		while (in >> a_id >> a_first_name >> a_last_name >> a_price >> a_rating >> a_services >> a_state >> a_email)
		{
			// string to extract line from 
			// file.txt
			string text;

			// Writing the extracted line in 
			// file2.txt
			out1 << a_id << " " << a_first_name << " " << a_last_name << " " << a_price << " " << a_rating << " " << a_services << " " << a_state << " " << a_email << endl;
		}
		in.close();
		out1.close();

		std::ofstream ofs;
		ofs.open("c_talent.dat", std::ofstream::out | std::ofstream::trunc);
		ofs.close();
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
