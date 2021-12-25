#include <iostream>

using namespace std;

int main() {
	int alphabet[26] = { 0 };
	string input_word;

	cin >> input_word;

	for (int i = 0; i < input_word.length(); i++) {
		int index = input_word[i] - 97;

		if (alphabet[index] == 0) {
			alphabet[index] = i + 1;
		}
		else {
			continue;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] == 0) {
			cout << "-1 ";
		}
		else {
			cout << alphabet[i]-1 << " ";
		}
	}
}