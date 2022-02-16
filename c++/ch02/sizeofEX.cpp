#include <iostream>
using namespace std;
void func(char* list);

int main() {
	char name1[] = {'G','r','a','c','e','\0'};
	char name2[] = {'G','r','a','c','e'};
	char name3[] = "Grace";
	func(name3);
	//cout << name1 << endl;
	//cout << name2 << endl;
	//cout << name3 << endl;
	//cout << strlen(name1) << " " << strlen(name2) << " " << strlen(name3) << endl;
	//cout << sizeof(int) << " " << sizeof(char) << " " << sizeof(double) << endl;
	//cout << sizeof(name1) << endl;//6
	//cout << sizeof(name2) << endl;//5
	//cout << sizeof(name3) << endl;//10
	//cout << name3[0] << endl;
	//int i;
	//double d;
	//cout << sizeof(i) << " " << sizeof(d) << endl;
	return 0;
}
void func(char* list) {
	cout << sizeof(list) << " " << list << endl;
}
