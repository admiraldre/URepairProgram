#include <iostream>
#include <iomanip>
#include "Admin.h"
#include "Client.h"
#include "Talent.h"
using namespace std;

int main(int argc, char** argv) {
	string classtype, prompt, retry;
	cout << setw(70);
	cout << "TEST RUN BEFORE GUI" << endl;
	cout << endl;
	cout << "This application is an Urepair  that Connects user with talents for repairs" << endl;
	cout << endl;
	cout << "This app is made by Andrei Vivar, Raiden Yamaoka and Jack Ukitetu." << endl;
	cout << endl;

	for (;;) {
		cout << "Enter '0' to start." << endl;
		cin >> prompt;

		if (prompt == "0") {
			cout << "what type of user (e.g Client=1, Talent=2, Admin=3) = ";
			cin >> classtype;

			if (classtype == "1") {
				Client c1;
				c1.for_client();
			}

			else if (classtype == "2") {
				Talent t1;
				t1.for_talent();
			}

			else  if (classtype == "3") {
				Admin a1;
				a1.for_admin();
			}
			else
				cout << "Incorrect input, please try again." << endl;

			cout << "Enter '1' to quit the app. Enter '0' to continue searching. " << endl;
			cin >> retry;
			if (retry == "1") {
				cout << "Thanks for using the app! Get your equimpment fixed!" << endl;
				break;
			}
			else
				continue;
		}
		else {
			cout << "Incorrect input, please try again." << endl;
		}
	}
	return 0;
}