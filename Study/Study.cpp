#include <iostream>
#include <climits>

using namespace std;

int main() { 
	int n_int = INT_MAX; // 
	unsigned int n_unsigned_int = 0;
	
	cout << "int는 " << sizeof n_int << "바이트를 사용하며, " << endl
		<< "표한 가능한 범위는 최대 " << n_int << " 까지이다." << endl;

	cout << "unsigned int는 " << sizeof n_unsigned_int << "바이트를 사용하며, " << endl
		<< "표한 가능한 범위는 최대 " << n_unsigned_int -1  << "+1 까지이다." << endl;
}

