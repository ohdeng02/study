#include <iostream>
#include <string>
using namespace std;
int getNumber(char uppercaseLetter);

int main() {
	cout << "Enter a string: ";
	string letter;
	getline(cin, letter);
	int num = 0;
	for (int i = 0; i < size(letter); i++) {
		if ((letter[i] <= 'z' && letter[i] >= 'a') || (letter[i] >= 'A' && letter[i] <= 'Z')) {
			num = getNumber(letter[i]);
			cout << num;
		}
		else {
			cout << letter[i];
		}
	}
	return 0;
}
int getNumber(char uppercaseLetter) {
	switch (uppercaseLetter)
	{
	case 'A': case 'a': case 'B': case 'b': case 'C': case 'c':
		return 2;
		break;
	case 'D': case 'd': case 'E': case 'e': case 'F': case 'f':
		return 3;
		break;
	case 'G': case 'g': case 'H': case 'h': case 'i': case 'I':
		return 4;
		break;
	case 'J': case 'j': case 'K': case 'k': case 'L': case 'l':
		return 5;
		break;
	case 'M': case 'm': case 'N': case 'n': case 'O': case 'o':
		return 6;
		break;
	case 'P': case 'p': case 'Q': case 'q': case 'R': case 'r': case 'S': case 's':
		return 7;
		break;
	case 'T': case 't': case 'U': case 'u': case 'V': case 'v':
		return 8;
		break;
	case 'W': case 'w': case 'X': case 'x': case 'Y': case 'y': case 'z': case 'Z':
		return 9;
		break;
	default:
		cout << "프로그램을 다시 시작하십시오." << endl;
		return 0;
		break;
	}
}