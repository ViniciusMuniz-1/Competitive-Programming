#include <bits/stdc++.h>

using namespace std;

typedef vector<long long> vi;

int main(){
    long long quantB, altura, cont = 0, var;   

    cin >> quantB >> altura;

    long long array[quantB];

    for(int i = 0; i < quantB; i++){
        cin >> var;
        array[i] = var;
    }


    for(int i = 0; i < quantB; i++){
        if(array[i] <= altura){
            cont++;
        }
    }

    cout << cont;
    
}