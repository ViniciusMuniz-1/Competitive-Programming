#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
    int numTot, numRet;

    cin >> numTot >> numRet;

    vi mergulhadores(numTot, 0);

    for(int i = 0; i < numRet; ++i){
        int indexReturn;
        cin >> indexReturn;
        mergulhadores[indexReturn-1] = 1;
    }
    
    int valor = 1;

    bool saoTodosIguais = all_of(mergulhadores.begin(), mergulhadores.end(), [valor](int elemento) {
        return elemento == valor;
    });

    if(saoTodosIguais){
        cout << "*" << endl;
    }
    else{
        for(int i = 0; i < numTot; ++i){
            if(mergulhadores[i] == 0){
                cout << i+1 << " ";
            }
        }
    }
}