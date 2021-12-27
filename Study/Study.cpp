#include <iostream>

using namespace std;

int groupWord(string input_data);

int main() {
	bool alphabet[26];

	int test_case = 0;
	cin >> test_case;

	int sum = 0;

	for (int i = 0; i < test_case; i++) {
		string input_data;
		cin >> input_data;

		sum += groupWord(input_data);
	}
	
	cout << sum;
}

int groupWord(string input_data) {
	char temp = ' ';
	bool alphabet[26];

	for (int j = 0; j < input_data.length(); j++) {
		if (alphabet[input_data[j] - 97] == false) {
			return 0;
		}
		else {
			alphabet[input_data[j] - 97] = false;
			temp = input_data[j];
			while (input_data[j+1] == temp) {
				j++;
			}
		}
	}
	return 1;
}
