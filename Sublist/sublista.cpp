#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
    int a,b,ans = 0,j = 0, k = 0;
    cin >> a >> b;
    vi x(a), y(b);

    for( int &i: x) cin >> i;

    for( int &i: y) cin >> i;

    while(a>0 and b > 0){
        if(x[j] == y[k]){
            j++;
            k++;
            a--;
            b--;
        }
        else{
            j++;
            a--;
            b--;
        }
    }

    if(k == b){
        ans = 1;
    }

    if(ans == 1){
        cout << "S";
    }
    else{
        cout << "N";
    }

    return 0;
}