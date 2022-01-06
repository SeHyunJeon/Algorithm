#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int compare(const void* a, const void* b)    // �������� �� �Լ� ����
{
	int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������

	if (num1 < num2)    // a�� b���� ���� ����
		return -1;      // -1 ��ȯ

	if (num1 > num2)    // a�� b���� Ŭ ����
		return 1;       // 1 ��ȯ

	return 0;    // a�� b�� ���� ���� 0 ��ȯ
}

int main() {
	int input_case = 0;
	cin >> input_case;

	int i = 0;
	int* arr = new int[input_case];

	for (i = 0; i < input_case; i++) {
		cin >> arr[i];
	}

	qsort(arr, input_case, sizeof(int), compare);

	for (i = 0; i < input_case; i++) {
		cout << arr[i] << endl;
	}

	delete[] arr;
	return 0;
}