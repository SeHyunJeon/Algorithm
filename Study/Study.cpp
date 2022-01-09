#include <iostream>

using namespace std;

int arr[10001] = { 0, };

int main()
{
    int input_case = 0;
    cin >> input_case;

    int temp;
    for (int i = 0; i < input_case; i++) {
        cin >> temp;
        arr[temp]++;
    }

    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < arr[i]; j++) {
            cout << i << endl;
        }
    }
}