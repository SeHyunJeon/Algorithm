#include <iostream>


int main() {
	int lucky_number = 3, user_input;
	std::cout << "Search the my Lucky Number!" << std::endl;

	while (1) {
		std::cout << "�Է�: ";
		std::cin >> user_input;
		if (user_input == lucky_number) {
			std::cout << "�����Դϴ�!" << std::endl;
			return 0;
		}
		else {
			std::cout << "�����Դϴ�!" << std::endl;
		}
	}

}

