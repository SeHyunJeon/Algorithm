#include <iostream>
#include <string>

using namespace std;



int main() {
	int n = 0;
	cin >> n;

	int weight[50] = { 0, };
	int height[50] = { 0, };
	int ranks[50] = { 0, };


	for (int i = 0; i < n; i++) {
		cin >> weight[i] >> height[i];
	}

	for (int i = 0; i < n; i++) {
		int rank = 1;
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}
			else {
				if (weight[i] < weight[j] && height[i] < height[j]) {
					rank++;
				}
			}
		}
		ranks[i] = rank;
	}

	for (int i = 0; i < n; i++) {
		cout << ranks[i] << ' ';
	}

}
