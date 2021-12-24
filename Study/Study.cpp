#include <iostream>

using namespace std;

int main() {
	int a = 5;
	int* p = &a;
	cout << "(a)변수 a의 값: " << a << endl;
	cout << "(&a)변수 a의 주소: " << &a << endl;
	cout << "(*p)포인터 변수 p의 값: " << *p << endl;
	cout << "(&p)포인터 변수 p의 주소: " << &p << endl;
	cout << "(p)그냥 p를 찍었을 때: " << p << endl;
	
}