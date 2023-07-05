#include <iostream>

using namespace std;

int main()
{
    int h, m;
    int gap;

    cin >> h >> m;
    cin >> gap;

    if(m + gap >= 60){
        h += (m + gap) / 60;
        m = (m + gap) % 60;
    }
    else{
        m += gap;
    }

    cout << h % 24 << " " << m << endl;

    return 0;
}