#include <iostream>
using namespace std;
string commonChars(const string& s1, const string& s2);

int main() {
	cout << "Enter a string s1: ";
	string s1, s2;
	cin >> s1;
	cout << "Enter a string s2: ";
	cin >> s2;
	string res=commonChars(s1, s2);
	if (res[0] == NULL) {
		cout << "They don't have common chars" << endl;
	}
	else {
		cout << "common chars are " << res << endl;
	}
	return 0;
}
string commonChars(const string& s1, const string& s2) {
	string s3;
	int index = 0;
	bool TF = false;
	for (int i = 0; i < s1.size(); i++) {
		for (int j = 0; j < s2.size(); j++) {
			if (s1[i] == s2[j]) {
				
				for (int k = 0; k < s3.size(); k++) {
					if (s3[k] == s1[i]) {
						TF = true;
					}
				}
				if (TF == false) {
					s3+=s1[i];
				}
				TF = false;
			}
		}
	}
	//s3 += '\0';
	return s3;
}