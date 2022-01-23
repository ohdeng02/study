#include <iostream>
using namespace std;

int main() {
	cout << "n		f(n)"<<endl;
	double fn=0;
	for (double i = 2; i <= 14; i += 2) {
		cout << i;
		fn += (1.0 / (i*(i + 2)));
		cout << "		"<<fn << endl;
	}
	return 0;
}