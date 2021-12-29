#include <iostream>

using namespace std;



int main() {
	int the_number_of_card = 0;
	int max_value = 0;

	int card[101] = { 0, };

	cin >> the_number_of_card >> max_value;

	for (int i = 0; i < the_number_of_card; i++) {
		cin >> card[i];
	}

	int max_sum = 0;
	int sum = 0;

	for (int i1 = 0; i1 < the_number_of_card; i1++) {
		for (int i2 = 0; i2 < the_number_of_card; i2++) {
			if (i2 == i1) {
				continue;
			}
			for (int i3 = 0; i3 < the_number_of_card; i3++) {
				if (i3 == i2 || i3 == i1) {
					continue;
				}
				sum = card[i1] + card[i2] + card[i3];
				if (sum <= max_value && sum > max_sum) {
					max_sum = sum;
				}
			}
		}
	}

	cout << max_sum << endl;
}
