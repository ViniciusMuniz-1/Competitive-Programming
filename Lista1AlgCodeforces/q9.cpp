#include <bits/stdc++.h>

using namespace std;

int main(){
    long long num1, num2, r;

    cin >> num1 >> num2;

    while(num2 != 0){
        r = num1%num2;
        num1 = num2;
        num2 = r;
    }

    cout << num1 << endl;
}