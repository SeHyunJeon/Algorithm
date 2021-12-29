#include <iostream>
#include <string>

using namespace std;



int main() {
	int input_data = 0;
	cin >> input_data;

	int sum = 0;
	int temp = 0;

	for (int i = 1; i < input_data; i++) {
		sum = i;
		int j = i;

		while (j > 0) {
			temp = j % 10;
			sum += temp;
			j /= 10;
		}
		if (sum == input_data) {
			cout << i << endl;
			return 0;
		}
	}
	cout << '0' << endl;
	return 0;
}
