#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[9] = { 0, };
	int arr1[7] = { 0, };

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}

	int temp = 0;

	for (int i1 = 0; i1 < 9; i1++) {
		for (int i2 = 0; i2 < 9; i2++) {
			if (i1 == i2) continue;
			for (int i3 = 0; i3 < 9; i3++) {
				if (i1 == i3 || i2 == i3) continue;
				for (int i4 = 0; i4 < 9; i4++) {
					if (i1 == i4 || i2 == i4 || i3 == i4) continue;
					for (int i5 = 0; i5 < 9; i5++) {
						if (i1 == i5 || i2 == i5 || i3 == i5 || i4 == i5) continue;
						for (int i6 = 0; i6 < 9; i6++) {
							if (i1 == i6 || i2 == i6 || i3 == i6 || i4 == i6 || i5 == i6) continue;
							for (int i7 = 0; i7 < 9; i7++) {
								if (i1 == i7 || i2 == i7 || i3 == i7 || i4 == i7 || i5 == i7 || i6 == i7) continue;
								temp = arr[i1] + arr[i2] + arr[i3] + arr[i4] + arr[i5] + arr[i6] + arr[i7];
								if (temp == 100) {
									arr1[0] = arr[i1];
									arr1[1] = arr[i2];
									arr1[2] = arr[i3];
									arr1[3] = arr[i4];
									arr1[4] = arr[i5];
									arr1[5] = arr[i6];
									arr1[6] = arr[i7];

									sort(arr1, arr1 + 7);

									for (int i = 0; i < 7; i++) {
										cout << arr1[i] << endl;
									}

									return 0;
								}
							}
						}
					}
				}
			}
		}
	}
}