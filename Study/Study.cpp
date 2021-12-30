#include <iostream>
#include <algorithm>

using namespace std;

string chess[50] = {" ",  };





int BW_cnt(int y, int x, string* chess);
int WB_cnt(int y, int x, string* chess);

int main() {
	int x = 0, y = 0;
	cin >> y >> x;


	for (int i = 0; i < y; i++) {
		cin >> chess[i];
	}

	int min_value = 65; // 수정 가능한 최대치는 64개(8*8)이므로 최솟값을 찾기 위해 초기값은 65로 설정
	int result_BW = 0;
	int result_WB = 0;


	for (int i = 0; i + 7 < y; i++) {
		for (int j = 0; j + 7 < x; j++) {
			result_BW = BW_cnt(i, j, chess);
			result_WB = WB_cnt(i, j, chess);
			min_value = min(result_BW, min(result_WB, min_value));
		}
	}

	cout << min_value << endl;
	return 0;
}

int BW_cnt(int y, int x, string* chess) {
	int cnt = 0;
	string BW[8] = { "BWBWBWBW",
					 "WBWBWBWB",
					 "BWBWBWBW",
					 "WBWBWBWB",
					 "BWBWBWBW",
					 "WBWBWBWB",
					 "BWBWBWBW",
					 "WBWBWBWB" };

	for (int y1 = y; y1 < y + 8; y1++) {
		for (int x1 = x; x1 < x + 8; x1++) {
			if (chess[y1][x1] != BW[y1 - y][x1 - x]) {
				cnt++;
			}
		}
	}

	return cnt;
}

int WB_cnt(int y, int x, string* chess) {
	int cnt = 0;
	string WB[8] = { "WBWBWBWB",
					 "BWBWBWBW",
					 "WBWBWBWB",
					 "BWBWBWBW",
					 "WBWBWBWB",
					 "BWBWBWBW",
					 "WBWBWBWB",
					 "BWBWBWBW" };

	for (int y1 = y; y1 < y + 8; y1++) {
		for (int x1 = x; x1 < x + 8; x1++) {
			if (chess[y1][x1] != WB[y1 - y][x1 - x]) {
				cnt++;
			}
		}
	}

	return cnt;
}