#include <bits/stdc++.h>

using namespace std;

int main(){
    int num, primo;

    cin >> num;

    if(num == 1){
        primo = 0;
    }
    else{
        for(int i = 2; i <= num/2; ++i){
            if(num%i == 0){
                primo = 0;
                break;
            }
        }
    }

    if(primo){
        cout << "Sim" << endl;
    }
    else{
        cout << "Nao" << endl;
    }
}