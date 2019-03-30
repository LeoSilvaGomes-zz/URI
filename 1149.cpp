#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b = 0, c;
    cin >> a;
    c = a;
    while (b <= 0){
        cin >> b;
    }
    while(b != 1){
        a++;
        c = c + a;
        b--;
    }
    cout << c << endl;
    return 0;
}