#include <iostream>

using namespace std;

int main() {
	int a = 5;
	int* p = &a;
	cout << "(a)���� a�� ��: " << a << endl;
	cout << "(&a)���� a�� �ּ�: " << &a << endl;
	cout << "(*p)������ ���� p�� ��: " << *p << endl;
	cout << "(&p)������ ���� p�� �ּ�: " << &p << endl;
	cout << "(p)�׳� p�� ����� ��: " << p << endl;
	
}