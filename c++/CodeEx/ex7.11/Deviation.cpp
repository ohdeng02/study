#include <iostream>
#include <math.h>
using namespace std;
double mean(const double x[], int size);
double deviation(const double x[], int size);

int main() {
	cout << "Enter the ten numbers: ";
	double num[10];
	for (int i = 0; i < sizeof(num) / 8; i++) {
		cin >> num[i];
	}
	double m = mean(num, sizeof(num) / 8);
	cout << "The mean is " << m << endl;
	double d = deviation(num, sizeof(num) / 8);
	cout << "The standard deviation is " << d << endl;
	return 0;
}
double mean(const double x[], int size) {
	double mean = 0;
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += x[i];
	}
	mean = sum / size;
	return mean;
}
double deviation(const double x[], int size) {
	double m = mean(x, size);
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += pow(x[i] - m, 2);
	}
	double d = sqrt((sum) / (size - 1));
	return d;
}
