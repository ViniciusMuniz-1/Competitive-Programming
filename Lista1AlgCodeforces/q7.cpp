#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a11, p1, a21, p2, a12, a22;

    cin >> a11 >> a21 >> a12 >> a22 >> p1 >> p2;

    long long media1 = ((a11*p1)+(a21*p2))/(p1+p2);

    long long media2 = ((a12*p1)+(a22*p2))/(p1+p2);

    if(media1<media2){
        cout << 2 << endl;
    }
    else{
        cout << 1 << endl;
    }
}