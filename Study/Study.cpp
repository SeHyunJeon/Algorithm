#include <iostream>

using namespace std;

int main() {
	int input_case = 0;
	cin >> input_case;

	int number[1000] = { 0, };

	for (int i = 0; i < input_case; i++) {
		cin >> number[i];
	}

	int temp = 0;

	for (int i = 0; i < input_case; i++) {
		for (int j = 0; j < input_case - 1; j++) {
			if (number[j] > number[j + 1]) {
				temp = number[j+1];
				number[j + 1] = number[j];
				number[j] = temp;
			}
		}
	}

	for (int i = 0; i < input_case; i++) {
		cout << number[i] << endl;
	}
}