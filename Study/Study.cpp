#include <iostream>

using namespace std;

void selfNum(int number, bool* numbers);

int main() {
	bool numbers[10000] = { false };

	for (int i = 1; i < 10000; i++) {
		int number = i;
		selfNum(number, numbers);
	}

	for (int i = 1; i < 10000; i++) {
		if (numbers[i] == false) {
			cout << i << endl;
		}
	}
}

void selfNum(int number, bool* numbers) {
	while (number < 10000) {
		int num_of_1000 = number / 1000;
		int num_of_100 = number / 100 % 10;
		int num_of_10 = number / 10 % 10;
		int num_of_1 = number % 10;

		number = number + num_of_1000 + num_of_100 + num_of_10 + num_of_1;
		if (number >= 10000) {
			break;
		}
		numbers[number] = true;
	}
}