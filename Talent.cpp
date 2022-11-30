#include "Talent.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>   
using namespace std;

string password_t;
string t_talent_id, t_pick, t2_pick,t_choose,textline;
string t_id, t_first_name, t_last_name, t_state, t_email, t_services, t2_services;
float t_price, t_rating;

Talent::Talent()
{
	string password_t = "0";
}

void t_readfile()
{
	ifstream mydata;
	mydata.open("talent.dat");
	while (mydata >> t_id >> t_first_name >> t_last_name >> t_price >> t_rating >> t_services >> t_state >> t_email)
	{

		if (t_id == t_talent_id)
		{
			cout << t_id << " " << t_first_name << " " << t_last_name << " $" << t_price << " rating :" << t_rating << " Services: " << t_services << " " << "is " << t_state <<" Email :"<<t_email<< endl;
		}


	}
	mydata.close();
}

void t_new_talent()
{
	fstream mydata;
	mydata.open("talent.dat", std::ios::app);
	cout << "t_id format(000):";
	cin >> t_id;
	cout << "First name :";
	cin >> t_first_name;
	cout << "Last name :";
	cin >> t_last_name;
	cout << "Price :";
	cin >> t_price;
	t_rating = 5.0; //setting average rating
	cout << "Services :";
	cin >> t_services;
	t_state = "Available"; //setting state to available as a new talent
	cout << "Enter email :";
	cin >> t_email;
	std::ostringstream text_join;
	text_join <<"\n"<< t_id << " " << t_first_name << " " << t_last_name << " " << t_price << " " << t_rating << " " << t_services << " " << t_state << " " << t_email << "\n";
	std::string textline = text_join.str();
	mydata << textline;
	mydata.close();
}

void t_chgfile()
{
	ifstream mydata;
	mydata.open("talent.dat");
	ofstream c_data;
	c_data.open("c_talent.dat");
	while (mydata >> t_id >> t_first_name >> t_last_name >> t_price >> t_rating >> t_services >> t_state >> t_email)
	{

		if (t_id != t_talent_id)
		{
			c_data << t_id << " " << t_first_name << " " << t_last_name << " " << t_price << " " << t_rating << " " << t_services << " " << t_state << " " << t_email << endl;

		}
		else
		{
			c_data.close();
			c_data.open("c_talent.dat", std::ios::app);
			cout << t_id << " " << t_first_name << " " << t_last_name << " $" << t_price << " rating :" << t_rating << " Services: " << t_services << " " << "is " << t_state << " Email :" << t_email << endl;

			cout << "New price: ";
			cin >> t_price;
			cout << "New Services: ";
			cin >> t_services;
			cout << "(Available or Booked ): ";
			cin >> t_state;
			cout << "New email: ";
			cin >> t_email;
			std::ostringstream text_join;
			text_join << t_id << " " << t_first_name << " " << t_last_name << " " << t_price << " " << t_rating << " " << t_services << " " << t_state << " " << t_email << endl;
			std::string textline = text_join.str();
			c_data << textline;
		}

	}

	mydata.close();
	c_data.close();

	//std::rename("c_talent.dat", "talent.dat");

	ifstream in("c_talent.dat");
	ofstream out1("talent.dat");

	while (in >> t_id >> t_first_name >> t_last_name >> t_price >> t_rating >> t_services >> t_state >> t_email)
	{
		// string to extract line from 
		// file.txt
		string text;

		// Writing the extracted line in 
		// file2.txt
		out1 << t_id << " " << t_first_name << " " << t_last_name << " " << t_price << " " << t_rating << " " << t_services << " " << t_state << " " << t_email << endl;
	}
	in.close();
	out1.close();

	std::ofstream ofs;
	ofs.open("c_talent.dat", std::ofstream::out | std::ofstream::trunc);
	ofs.close();
}



int Talent::for_talent()
{
	string password_t;
	cout << "Enter Talent password (1234) :";
	cin >> password_t;

	if (password_t == "1234") {
		//operation will be done here
		cout << "1 for login" << endl;
		cout << "2 for creating new account" << endl;
		cout << "choose :";
		cin >> t_choose;

		if (t_choose == "1")
		{
			cout << "Enter your Talent id = ";
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
				t_chgfile();
			}
			else
				cout << "invaild chose" << endl;
		}
		else if (t_choose == "2")
		{
			t_new_talent();
		}

		}
		else
			cout << "incorrect password" << endl;


	return 0;
}
