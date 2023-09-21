#include <bits/stdc++.h>
using namespace std;

int main(){
    int casosT;
    cin >> casosT;

    for(int i = 0; i < casosT; i++){
        int contSec = 0;
        int coeM, coeP, distM, distP;
        cin >> coeM >> coeP >> distM >> distP;

        while(coeM != coeP){
            if(coeM > coeP){
                cout << -1 << "\n";
                break;
            }
            coeM += distM;
            coeP -= distP;
            contSec++;
            if(coeM == coeP){
                cout << contSec << "\n";
                contSec = 0;
                break;
            }
        }
    }
}