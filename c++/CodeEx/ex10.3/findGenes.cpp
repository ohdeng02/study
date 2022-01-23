#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Enter a genome string: ";
	string genome;
	cin >> genome;
	bool TF = false;
	for (int i = 0; i < genome.size()-2; i++) {
		if (genome[i] == 'A' && genome[i+1] == 'T' && genome[i+2] == 'G') {
			i += 3;
			TF = true;
			while (true) {
				if ((genome[i] == 'T' && genome[i + 1] == 'A' && genome[i + 2] == 'G') ||
					(genome[i] == 'T' && genome[i + 1] == 'A' && genome[i + 2] == 'A') ||
					(genome[i] == 'T' && genome[i + 1] == 'G' && genome[i + 2] == 'A')) {
					cout << endl;
					i += 2;
					break;
				}
				cout << genome[i];
				i++;
			}
		}
	}
	if (TF == false) {
		cout << "no gene is found" << endl;
	}
	return 0;
}