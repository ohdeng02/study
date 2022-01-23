#include <iostream>
using namespace std;

int main() {
	cout << "Enter weight in pounds: ";
	double weight;
	cin >> weight;
	weight = weight * 0.45359237;
	cout << "Enter height in inches: ";
	double height;
	cin >> height;
	height = height * 0.0254;
	double BMI = weight / (height * height);
	cout << "BMI is " << BMI << endl;
	return 0;
}