#include <bits/stdc++.h>
using namespace std;

int main(){
    int casosT;
    cin >> casosT;

    for (int i = 0; i < casosT; i++) {
        int coeM, coeP, distM, distP;
        cin >> coeM >> coeP >> distM >> distP;
        if (coeM < coeP && distM <= distP && (coeP - coeM) % (distM + distP) == 0) {
            int quantSec = (coeP - coeM) / (distP + distM);
            cout << quantSec << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}