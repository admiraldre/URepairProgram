#include "Client.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

string c_talent_id, c_pick;
string c_id, c_first_name, c_last_name, c_state, c_email, c_services;
float c_price, c_rating;
float arr[200]; //set the number of talent to a max of 200


int i = 0;
int N = 200; //set the number of talent to a max of 200

void a_read_all_file()
{
	ifstream mydata;
	mydata.open("talent.dat");
	while (mydata >> c_id >> c_first_name >> c_last_name >> c_price >> c_rating >> c_services >> c_state >> c_email)
	{
		cout << c_id << " " << c_first_name << " " << c_last_name << " $" << c_price << " rating :" << c_rating << " Services: " << c_services << " " << "is " << c_state << " Email :" << c_email<<endl;

	}
	mydata.close();
}

float* c_readfile_rating()
{
	ifstream mydata;
	mydata.open("talent.dat");
	while (mydata >> c_id >> c_first_name >> c_last_name >> c_price >> c_rating >> c_services >> c_state >> c_email)
	{
		arr[i] = c_rating;
		i++;

	}
	//mydata.close();

	return arr;
}

float* c_readfile_price()
{
	ifstream mydata;
	mydata.open("talent.dat");
	while (mydata >> c_id >> c_first_name >> c_last_name >> c_price >> c_rating >> c_services >> c_state >> c_email)
	{
		
		arr[i] = c_price;
		i++;

	}
	//mydata.close();

	return arr;
}


void heapify(float arr[], string arr2[], int N, int i) {
	// Find largest among root, left child and right child
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < N && arr[left] < arr[largest])
		largest = left;

	if (right < N && arr[right] < arr[largest])
		largest = right;

	// Swap and continue heapifying if root is not largest
	if (largest != i) {
		swap(arr[i], arr[largest]);
		swap(arr2[i], arr2[largest]);
		heapify(arr, arr2, N, largest);
	}

}

void heapSort(float arr[], string arr2[], int N) {
	// Build max heap
	for (int i = N / 2 - 1; i >= 0; i--)
		heapify(arr, arr2, N, i);


	// Heap sort
	for (int i = N - 1; i >= 0; i--) {
		swap(arr[0], arr[i]);
		swap(arr2[0], arr2[i]);

		// Heapify root element to get highest element at root again
		heapify(arr, arr2, i, 0);
	}
}

void printHeap_rating(string arr[], int N)
{
	cout << endl;
	cout << "Sorted by rating :\n";

	for (int i = 0; i < N; ++i)
	{
		ifstream mydata;
		mydata.open("talent.dat");
		while (mydata >> c_id >> c_first_name >> c_last_name >> c_price >> c_rating >> c_services >> c_state >> c_email)
		{
			if (c_id == arr[i])
			{
				cout << c_id << " " << c_first_name << " " << c_last_name << " $" << c_price << " rating :" << c_rating << " Services: " << c_services << " " << "is " << c_state << " Email :" << c_email << endl;
			}

		}
		mydata.close();
	}
}

void printHeap_price(string arr[], int N)
{
	cout << endl;
	cout << "Sorted by price :\n";

	for (int i = 0; i < N; ++i)
	{
		ifstream mydata;
		mydata.open("talent.dat");
		while (mydata >> c_id >> c_first_name >> c_last_name >> c_price >> c_rating >> c_services >> c_state >> c_email)
		{
			if (c_id == arr[i])
			{
				cout << c_id << " " << c_first_name << " " << c_last_name << " $" << c_price << " rating :" << c_rating << " Services: " << c_services << " " << "is " << c_state << " Email :" << c_email << endl;
			}

		}
		mydata.close();
	}
}

void printHeap_location(string arr[], int N)
{
	cout << endl;
	cout << "Sorted by location :\n";

	for (int i = 0; i < N; ++i)
	{
		ifstream mydata;
		mydata.open("talent.dat");
		while (mydata >> c_id >> c_first_name >> c_last_name >> c_price >> c_rating >> c_services >> c_state >> c_email)
		{
			if (c_id == arr[i])
			{
				cout << c_id << " " << c_first_name << " " << c_last_name << " $" << c_price << " rating :" << c_rating << " Services: " << c_services << " " << "is " << c_state << " Email :" << c_email << endl;
			}

		}
		mydata.close();
	}
}



Client::Client() {
	string password_c = "0";
}

int Client::for_client()
{

	//float* new_a;
	float arr2[200]; //set the number of talent to a max of 200
	int w = 0;
	string arr_c_id[200]; //set the number of talent to a max of 200
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
		cin >> c_pick;

		ifstream mydata;
		mydata.open("talent.dat");
		while (mydata >> c_id >> c_first_name >> c_last_name >> c_price >> c_rating >> c_services >> c_state >> c_email)
		{

			arr_c_id[w] = c_id; //add all talent id into an array
			w++;

		}
		mydata.close();

		if (c_pick == "1")
		{
			float* new_a = c_readfile_rating();

			for (int j = 0; j < N; j++)
			{
				arr2[j] = new_a[j];
			}

			heapSort(arr2, arr_c_id, N);
			printHeap_rating(arr_c_id, N);

		}
		else if (c_pick == "2")
		{
			float* new_a = c_readfile_price();

			for (int j = 0; j < N; j++)
			{
				arr2[j] = new_a[j];
			}

			heapSort(arr2, arr_c_id, N);
			printHeap_price(arr_c_id, N);

		}
		else
			cout << "invaild chose" << endl;

		//stop here
	}
	else
		cout << "incorrect password" << endl;

	return 0;
}
