#include <iostream>
#include <climits>

using namespace std;

int main() { 
	int n_int = INT_MAX; // 
	unsigned int n_unsigned_int = 0;
	
	cout << "int�� " << sizeof n_int << "����Ʈ�� ����ϸ�, " << endl
		<< "ǥ�� ������ ������ �ִ� " << n_int << " �����̴�." << endl;

	cout << "unsigned int�� " << sizeof n_unsigned_int << "����Ʈ�� ����ϸ�, " << endl
		<< "ǥ�� ������ ������ �ִ� " << n_unsigned_int -1  << "+1 �����̴�." << endl;
}

