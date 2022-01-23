#include <iostream>
#include <string>
using namespace std;
int indexOf(const string& s1, const string& s2);

int main() {
	cout << "Enter the first string: ";
	string s1;
	cin >> s1;
	cout << "Enter the second string:";
	getchar();
	string s2;
	getline(cin, s2, '\n');
	int index = indexOf(s1, s2);
	cout << index << endl;
	return 0;
}
int indexOf(const string& s1, const string& s2) {
	int j = 0;
	int i1 = 0;
	for (int i = 0; i < size(s2); i++) {
		if (s1[j] == s2[i]) {
			j++; 
			if (j == 1) {
				i1 = i;
			}
			if (s1[j] != s2[i + 1]) {
				if (s1[j] == '\0') {

				}
				else {
					j = 0;
				}
			}
		}
	}
	if (j == size(s1)) {
		cout<< "indexOf(\""<<s1<<"\", \""<<s2<<"\")is ";
		return i1;
	}
	else {
		cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\")is ";
		return -1;
	}
}