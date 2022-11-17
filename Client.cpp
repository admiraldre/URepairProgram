#include "Client.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

string ctalent_id, cpick;
string cid, cfirst_name, clast_name, cstate;
float cprice, crating, clocation;
float arr[5];


int i = 0;
int N = 5;

void a_read_all_file()
{
	ifstream mydata;
	mydata.open("talent.dat");
	while (!mydata.eof())
	{
		mydata >> cid >> cfirst_name >> clast_name >> cprice >> crating >> clocation >> cstate;

		if (cstate=="Available")
			cout << cid << " " << cfirst_name << " " << clast_name << " $" << cprice << " rating :" << crating << " Distance: " << clocation << "km " << "is " << cstate << endl;

	}
	mydata.close();
}

float * c_readfile_rating()
{
	ifstream mydata;
	mydata.open("talent.dat");
	while (!mydata.eof())
	{
		mydata >> cid >> cfirst_name >> clast_name >>cprice >> crating >> clocation >> cstate;
	
		arr[i]=crating;
		i++;

	}
	//mydata.close();
	
	return arr;
}

float * c_readfile_price()
{
	ifstream mydata;
	mydata.open("talent.dat");
	while (!mydata.eof())
	{
		mydata >> cid >> cfirst_name >> clast_name >> cprice >> crating >> clocation >> cstate;

		arr[i] = cprice;
		i++;

	}
	//mydata.close();

	return arr;
}

void heapify(float arr[], int N, int i)
{
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	if (l < N && arr[l] > arr[largest])
		largest = l;

	if (r < N && arr[r] > arr[largest])
		largest = r;

	if (largest != i) {
		swap(arr[i], arr[largest]);

		heapify(arr, N, largest);
	}
}

void buildHeap(float arr[], int N)
{

	int startIdx = (N / 2) - 1;


	for (int i = startIdx; i >= 0; i--) {
		heapify(arr, N, i);
	}
}

void printHeap_rating(float arr[], int N)
{
	cout << "Rating of talent :\n";

	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

void printHeap_price(float arr[], int N)
{
	cout << "Rating of price :\n";

	for (int i = 0; i < N; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}



Client::Client() {
	string password_c = "0";
}

int Client::for_client()
{
	float* new_a;
	float arr2[5];
	string password_c;
	cout << "Enter Client password (1234) :";
	cin >> password_c;

	if (password_c == "1234") {
		cout << "All avaliable talent " << endl;
		//operation will be done here
		a_read_all_file();
		cout << endl;

		//this is not need just for assignment
		cout << "1 for sorting by rating" << endl;
		cout << "2 for sorting by price" << endl;
		cout << "choose :";
		cin >> cpick;

		if (cpick == "1")
		{
			float* new_a = c_readfile_rating();

			for (int j = 0; j < 5; j++)
			{
				arr2[j] = new_a[j];
			}

			buildHeap(arr2, N);
			printHeap_rating(arr2, N);
		}
		else if (cpick == "2")
		{
			float* new_a = c_readfile_price();

			for (int j = 0; j < 5; j++)
			{
				arr2[j] = new_a[j];
			}

			buildHeap(arr2, N);
			printHeap_price(arr2, N);
		}
		else 
			cout << "invaild chose" << endl;
			
		//stop here
	}
	else
		cout << "incorrect password" << endl;

	return 0;
}
