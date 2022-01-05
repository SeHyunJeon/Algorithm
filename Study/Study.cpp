#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int length = 0;
	cin >> length;

	int* arr = new int[length];

	for (int i = 0; i < length; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + length);

	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}
	
	delete[] arr;

	return 0;
}