#include <iostream>
#include <string>

using namespace std;

int main(){
    int input_number = 0;
    cin >> input_number;

    int i = 665;
    int cnt = 0;

    string str_number = "";;

    while(++i){
        str_number = to_string(i);
        if(str_number.find("666") != -1){
            cnt++;
        }
        if (cnt == input_number){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}