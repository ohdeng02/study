#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream output("scores.txt");
	if (!output) {
		cout << "File open error" << endl;
		return 0;
	}
	/*output << "John" << " " << 'T' << " " << "Smith" << " " << 90 << endl;
	output << "Eric" << " " << 'K' << " " << "Jones" << " " << 80 << endl;
	output << "Mike" << " " << 'M' << " " << "Dillworth" << " " << 100 << endl;*/
	string fn, ln;
	char m;
	int score;
	while (true) {
		cout << "First Name: "; cin >> fn;
		if (fn == "quit") {
			cout << "File end" << endl;
			break;
		}
		cout << "Middle Name: "; cin >> m;
		cout << "LastName: "; cin >> ln;
		cout << "Score: "; cin >> score;
		output << fn << " " << m << " " << ln << " " << score << endl;
		cout << "-------------------------------" << endl;
	}
	output.close();
	cout << "Done" << endl;
	return 0;
}