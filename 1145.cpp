#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, c, d = 1, e;
    cin >> a >> c;
    while (d != c){
        e = 1;
        while(e != a + 1){
            if (a == e){
                cout << d;
            }
            else{
                cout << d << " ";
            }
            e++;
            d++;
            if(d == c){
                if (a == e){
                    cout << d;
                }
                else{
                    cout << d << " ";
                }
                break;
            }
        }
        cout << endl;
    }
    return 0;
}