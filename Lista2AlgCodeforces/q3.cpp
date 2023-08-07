#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
    int cases, numTotalGoats, numGoat;
    
    cin >> cases;

    for(int i = 0; i < cases; ++i){
        cin >> numTotalGoats;

        vi goats;
        int contDif = 0, same;

        for(int i = 0; i < numTotalGoats; ++i){
            cin >> numGoat;
            goats.push_back(numGoat);

        }

        for(int i = 0; i < numTotalGoats; ++i){
            same = 0;
            for(int j = 0; j < i; j++){
                if(goats[i] == goats[j]){
                    same=1;
                    break;
                }
            }                
            if(!same){
                contDif++;
            }
        }

        cout << contDif << endl;

        contDif = 0;
    }
}