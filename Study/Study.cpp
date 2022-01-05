#include <iostream>

using namespace std;



int main() {
	int input_case = 0, i = 0, j = 0, temp = 0;

	cin >> input_case;

	int* arr = new int[input_case] {0, };

	for (i = 0; i < input_case; i++) {
		cin >> arr[i];
	}

	for (i = 1; i < input_case; i++) {
		for (j = i; j > 0; j--) {
			if (arr[j] < arr[j - 1]) {
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}

	for (i = 0; i < input_case; i++) {
		cout << arr[i] << endl;
	}

	delete[] arr;
}