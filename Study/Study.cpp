#include <iostream>


int main() {
	int lucky_number = 3, user_input;
	std::cout << "Search the my Lucky Number!" << std::endl;

	while (1) {
		std::cout << "입력: ";
		std::cin >> user_input;
		if (user_input == lucky_number) {
			std::cout << "정답입니다!" << std::endl;
			return 0;
		}
		else {
			std::cout << "오답입니다!" << std::endl;
		}
	}

}

