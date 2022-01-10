#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string input_number = "";
    cin >> input_number;
    int size = input_number.length();

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = input_number[i] - '0';
    }

    sort(arr, arr + size, greater<int>());

    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
}