
#include <iostream>
using namespace std;

const int foot = 12;  //12 inches
const float inch = 2.54; //2.54 cm

int main()
{
	int feet=0;
	float inches = 0;
	float cm = 0;

	cout << "Enter length in feet and inches." << endl;

	cout << "feet: ";

	while (!(cin >> feet) || cin.get() != '\n')
	{
		cout << "Please enter integers only."<<endl<<"feet: ";
		cin.clear();
		cin.ignore(256, '\n');

	}


	cout << "inches: ";
	cin >> inches;

	cm = (feet * foot + inches) * inch;

	cout << "Lenth in cm: "<<cm;

}
