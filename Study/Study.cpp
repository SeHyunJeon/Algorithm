#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int input_test_case = 0;

	cin >> input_test_case;

	for (int i = 0; i < input_test_case; i++) {
		int score[1000];
		int input_student = 0;
		int sum = 0;

		cin >> input_student;

		for (int j = 0; j < input_student; j++) {
			cin >> score[j];
			sum += score[j];
		}

		float avg = 0.0;
		avg = sum / input_student;

		int result = 0;

		for (int j = 0; j < input_student; j++) {
			if (score[j] > avg) {
				result++;
			}
		}

		printf("%.3f%%\n", (float)result / (float)input_student * 100);
	}
}