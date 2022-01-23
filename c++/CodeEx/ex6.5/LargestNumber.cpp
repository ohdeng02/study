#include <iostream>
using namespace std;
void displayLargest(double num1, double num2, double num3);

int main() {
	cout << "Enter the three numbers: ";
	double num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	displayLargest(num1, num2, num3);
	return 0;
}
void displayLargest(double num1, double num2, double num3) {
	double temp;
	temp = num1;
	if (temp < num2) {
		temp = num2;
	}
	if (temp < num3) {
		temp = num3;
	}
	cout << "Largest number is " << temp << endl;
}