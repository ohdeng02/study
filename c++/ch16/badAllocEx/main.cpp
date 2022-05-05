#include<iostream>
#include<stdexcept>
using namespace std;

int main() {
	try {
		for (int i = 0;i < 100;i++) {
			int* p = new int[70000000];//new°¡ throw
			cout << i << "array has been created." << endl;
		}
	}
	catch(bad_alloc& ex){
		cout << ex.what() << endl;
	}
	cout << "Execution continues..." << endl;
	return 0;
}