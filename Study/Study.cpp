#include <iostream>

using namespace std;

int main() {
	string input_data;
	cin >> input_data;

	int alpha[26] = { 0 };

	for (int i = 0; i < input_data.length(); i++) {
		if (input_data[i] >= 'a') {
			alpha[input_data[i] - 'a'] ++;
		}
		else if (input_data[i] < 'a') {
			alpha[input_data[i] - 'A'] ++;
		}
	}

	int max = 0;
	int temp = 0;

	for (int j = 1; j < 26; j++) {
		if (alpha[max] < alpha[j]) {
			max = j;
			temp = 0;
		}
		else if (alpha[max] == alpha[j]) {
			temp++;
		}
	}

	if (temp != 0) {
		cout << '?' << endl;
	}
	else if (temp == 0) {
		cout << char(max + 'A') << endl;
	}
}