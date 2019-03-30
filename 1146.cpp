#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a;
    while(a != 0){
        b = 1;
        while (a != 0){
            if (a != 1){
                cout << b << " ";
            }
            else{
                cout << b;
            }
            b++;
            a--;
        }
        cout << endl;
        cin >> a;

    }
    return 0;
}