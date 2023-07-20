#include <iostream>
#include <algorithm>

using namespace std;

int a[5000001];
int b[5000001];
int c[5000001] = {0,};

int main(){
    int n;
    cin  >> n;
    for(int i=0; i < n; i++){
        cin >> a[i];
    }

    int m;
    cin >> m;
    for(int i=0; i < m; i++){
        cin >> b[i];
    }

    sort(a,a+n);
    for(int i=0; i < m; i++){
        int right = n-1;
        int left = 0;
        while (left<=right)
        {
            int mid = (left+right)/2;
            if(a[mid] == b[i]){
                c[i] = 1;
                break;
            }
            else if(a[mid] > b[i]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        
    }

    for(int i=0; i < m; i++){
        cout << c[i] << " ";
    }


}