#include "Talent.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>   
using namespace std;

string password_t;
string t_talent_id, t_pick, t2_pick,t_choose,textline;
string t_id, t_first_name, t_last_name, t_state, t_email;
float t_price, t_rating, t_location, t2_location;

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
		mydata >> t_id >> t_first_name >> t_last_name >> t_price >> t_rating >> t_location >> t_state>>t_email;

		if (t_id == t_talent_id)
		{
			cout << t_id << " " << t_first_name << " " << t_last_name << " $" << t_price << " rating :" << t_rating << " Distance: " << t_location << "km " << "is " << t_state <<" Email :"<<t_email<< endl;
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
	t_rating = 5; //setting average rating
	t_location = rand() % 900;
	t_state = "Available"; //setting state to available as a new talent
	cout << "Enter email :";
	cin >> t_email;
	std::ostringstream text_join;
	text_join <<t_id<<" "<< t_first_name<< " "<< t_last_name << " "<< t_price << " " << t_rating << " " << t_location<<" "<< t_state<<" "<<t_email;
	std::string textline = text_join.str();
	mydata << "\n"<<textline;
	mydata.close();
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
				cout << endl;
				cout << "1 for editing distance" << endl;
				cout << "2 for editing price" << endl;
				cout << "3 for setting status to 'Booked'" << endl;
				cout << "4 for setting status to 'Available'" << endl;
				cout << "choose :";
				cin >> t2_pick;


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
