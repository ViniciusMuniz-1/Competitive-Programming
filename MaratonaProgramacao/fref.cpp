#include <bits/stdc++.h>

using namespace std;

typedef vector<long long> vi;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long dispo, cansa, revig, cont = 0;

    cin >> dispo >> cansa >> revig;

    vi cansaNum(cansa);
    vi revigNum(revig);

    for(long long &x: cansaNum) cin >> x;
    for(long long &x: revigNum) cin >> x;

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