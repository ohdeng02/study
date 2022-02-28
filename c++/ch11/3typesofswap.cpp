#include <iostream>
using namespace std;
void swap_passbyVar(int n1, int n2);
void swap_passbyRef(int& n1, int& n2);
void swap_passbyPtr(int* n1, int* n2);

int main() {
	
	int num1 = 50, num2 = -60;
	cout << "main address of num1, num2:" << &num1 << " " << &num2 << endl;
	swap_passbyVar(num1, num2);
	cout << "after returning from swap_passbyVar num1, num2:" << num1 << " " << num2 << endl;
	
	swap_passbyRef(num1, num2);
	cout << "after returning from swap_passbyRef num1, num2:" << num1 << " " << num2 << endl;
	
	swap_passbyPtr(&num1, &num2);
	cout << "after returning from swap_passbyPtr num1, num2:" << num1 << " " << num2 << endl;
	return 0;
}
void swap_passbyVar(int n1, int n2) {
	cout << "swap_passbyVar address of n1, n2:" << &n1 << " " << &n2 << endl;
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
void swap_passbyRef(int& n1, int& n2) {
	cout << "swap_passbyRef address of n1, n2:" << &n1 << " " << &n2 << endl;
	int temp = n1;
	n1 = n2;
	n2 = temp;
}
void swap_passbyPtr(int* n1, int* n2) {
	cout << "swap_passbyPtr address of n1, n2:" << &n1 << " " << &n2 << endl;
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}