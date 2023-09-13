#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long dispo, cansa, revig, cont = 0;

    cin >> dispo >> cansa >> revig;

    long long cansaNum[cansa];
    long long revigNum[revig];

    for(int i = 0; i < cansa; i++){
        cin >> cansaNum[i];
    }

    for(int i = 0; i < revig; i++){
        cin >> revigNum[i];
    }

    for(long long i = 0; i < revig; i++){
        dispo+=revigNum[i];
        cont++;
    }

    for(long long i = 0; i < cansa; i++){
        if(dispo >= cansaNum[i]){
            dispo -= cansaNum[i];
            cont++;
        } else{
            break;
        }
    }

    cout << cont;
}