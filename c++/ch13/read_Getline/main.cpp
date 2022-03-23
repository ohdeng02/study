#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	ifstream input("states.txt");
	if (!input) {
		cout << "File open error" << endl;
		return 0;
	}
	string city;
	while (true) {
		getline(input, city, '#');
		if (input.eof()) {
			cout << "End of file" << endl;
			break;
		}
		cout << city << endl;
	}
	input.close();
	cout << "Done" << endl;
	/*ifstream input("states.txt");
	if (!input) {
		cout << "File open error" << endl;
		return 0;
	}
	string city;
	while (true) {
		getline(input, city, '#');
		if (input.eof()) {
			cout << "End of file" << endl;
			break;
		}
		cout << city << endl;
	}
	input.close();
	cout << "Done" << endl;*/
	return 0;
}