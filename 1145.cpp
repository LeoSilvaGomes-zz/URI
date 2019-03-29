#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, c, d;
    int b = 1, i = 0, j;
    cin >> a;
    while (i != a){
        j = 0;
        c = b;
        while (j != 3){
            if (j != 2){
                cout << c << " ";
            }
            else{
                cout << c;
            }
            c = b * c;
            j++;
        }
        j = 0;
        d = b;
        c = b;
        cout << endl;
        while (j != 3){
            if (j != 2){
                cout << c << " ";
            }
            else{
                cout << c;
            }
            d = b * d;
            c = d + 1;
            j++;
        }
        cout << endl;
        b++;
        i++;
    }
    return 0;
}