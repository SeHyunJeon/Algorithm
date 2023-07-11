#include <iostream>

using namespace std;

int main()
{
    int dice1, dice2, dice3;

    cin >> dice1 >> dice2 >> dice3;

    if (dice1 == dice2 && dice2 == dice3)
    {
        cout << 10000 + dice1 * 1000 << endl;
    }
    else if (dice1 == dice2 || dice1 == dice3)
    {
        cout << 1000 + dice1 * 100 << endl;
    }
    else if (dice2 == dice3)
    {
        cout << 1000 + dice2 * 100 << endl;
    }
    else
    {
        int max = dice1;
        if (max < dice2)
        {
            max = dice2;
        }
        if (max < dice3)
        {
            max = dice3;
        }
        cout << max * 100 << endl;
    }
}