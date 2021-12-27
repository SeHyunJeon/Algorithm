#include <iostream>

using namespace std;

int fact(int num);

int main() {
	int input_number = 0;
	cin >> input_number;

	int result = 0;
	result = fact(input_number);

	cout << result << endl;
}

int fact(int num) {
	if (num == 0) {
		return 1;
	}

	return num * fact(num - 1);
}
