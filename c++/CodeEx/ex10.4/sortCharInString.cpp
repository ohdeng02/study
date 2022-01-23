#include <iostream>
#include <string>
using namespace std;
string sort(string& s);

int main() {
	cout << "Enter a string s: ";
	string s;
	getline(cin, s);
	string _s = sort(s);
	cout << "The sorted string is " << _s << endl;
	return 0;
}
string sort(string& s) {
	char temp;
	for (int i = 0; i < s.size()-1; i++) {
		char min = s[i];
		for (int j = i + 1; j < s.size(); j++) {
			if (min > s[j]) {
				min = s[j];
				s[j] = s[i];
				s[i] = min;
			}
		}
	}
	return s;
}