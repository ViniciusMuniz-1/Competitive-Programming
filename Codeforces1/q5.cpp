#include <bits/stdc++.h>
using namespace std;

int main(){
    int casosT;
    cin >> casosT;

    for(int i = 0; i < casosT; i++){
        int pA, pB;
        cin >> pA >> pB;

        while(pA != 0 || pB != 0){
            if(pA > pB){
                pA-=2;
                pB-=1;
            } else{
                pB-=2;
                pA-=1;
            }

            if((pA == 0 && pB !=0) || (pA != 0 && pB == 0)){
                cout << "NO" << "\n";
                break;
            }
            if(pA == 0 && pB == 0){
                cout << "YES" << "\n";
                break;
            }
        }
    }
}   