#include <iostream>
using namespace std;
bool isAnagram(const string& s1, const string& s2);

int main() {
	cout << "Enter a string s1: ";
	string s1;
	cin >> s1;
	cout << "Enter a string s2: ";
	string s2;
	cin >> s2;
	bool anagram = isAnagram(s1, s2);
	if (anagram == true) {
		cout << s1 << " and " << s2 << " are anagrams" << endl;
	}
	else {
		cout << s1 << " and " << s2 << " are not anagrams" << endl;
	}
	return 0;
}
bool isAnagram(const string& s1, const string& s2) {
	int count1[26] = { 0 };
	int count2[26] = { 0 };
	for (int i = 0; i < s1.size(); i++) {
		count1[s1[i] - 97]++;
	}
	for (int i = 0; i < s2.size(); i++) {
		count2[s2[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		if (count1[i] != count2[i]) {
			return false;
		}
	}
	return true;
}