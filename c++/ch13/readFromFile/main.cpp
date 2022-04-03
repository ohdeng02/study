#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream input("scores.txt");
	if (!input) {
		cout << "File open error" << endl;
		return 0;
	}
	string fn, ln;
	char m;
	int score;
	while (true) {
		input >> fn;
		if (input.eof()) {
			cout << "End of file" << endl;
			break;
		}
		input >> m;
		input >> ln;
		input >> score;
		cout << fn << " " << m << " " << ln << " " << score << endl;
	}
	input.close();
	cout << "Done" << endl;
	return 0;
}