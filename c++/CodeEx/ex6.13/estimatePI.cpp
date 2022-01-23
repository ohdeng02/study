#include <iostream>
using namespace std;

int main() {
	cout << "n		f(n)" << endl;
	for (int i = 2; i <= 20; i += 2) {
		cout << i << "		";
		double fn = 0;
		for (int j = 1; j <= i; j++) {
			fn += 1.0/pow(j, 2);
		}
		fn = sqrt(6 * fn);
		cout << fn << endl;
	}
	return 0;
}