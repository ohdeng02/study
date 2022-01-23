#include <iostream>
#include <string>
using namespace std;
int countVowels(const string& s);

int main() {
	cout << "Enter a string s: ";
	string s;
	getline(cin, s);
	int count = countVowels(s);
	cout << "The string has " << count << " vowels" << endl;
	return 0;
}
int countVowels(const string& s) {
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			count++;
		}
	}
	return count;
}