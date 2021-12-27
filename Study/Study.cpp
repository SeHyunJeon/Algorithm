#include <iostream>

using namespace std;

int main() {
	int search_room_number = 0;
	cin >> search_room_number;

	if (search_room_number == 1) {
		cout << '1' << endl;
		return 0;
	}

	int floor_max_room_number = 7;
	int floor = 1;


	while (true) {
		if (floor_max_room_number >= search_room_number) {
			cout << floor + 1 << endl;
			break;
		}
		else {
			floor++;
			floor_max_room_number += 6 * floor;
		}
	}

	return 0;
}