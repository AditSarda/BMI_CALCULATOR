#include<iostream>
using namespace std;

int main()
{
	double weight;
	double height;

	cout << endl << endl;
	cout << "Enter your weight (in kilograms): ";
	cin >> weight;

	cout << "Enter your height (in meters): ";
	cin >> height;

	double bmi = weight / (height * height);

	cout << endl << endl;
	cout << "----------------------------------" << endl;
	cout << "Your Body Mass Index is " << bmi << endl;

	cout << "----------------------------------" << endl;
	if (bmi < 18.5)
		cout << "You are Underweight";
	else if (bmi >= 18.5 && bmi <= 25)
		cout << "You are Perfectly Healthy";
	else if (bmi > 25)
		cout << "You are Overweight";

}