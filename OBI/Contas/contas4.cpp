#include <bits/stdc++.h>

int main(){
    using namespace std;
    
    int v, va, vf, vp;
    
    cin >> v >> va >> vf >> vp;
    int ans = 0;
    vector<int> contas (4);
    for(int = 0, i < 4; ++i){
        cin >> contas[i];
    };

    sort(contas.begin()+1, contas.end());

    for(int i = 1; i < 4; ++i){
        if(contas[i] <= contas[0]){
            ans++;
            contas[0] -= contas[i];
        }
    }

    cout << ans << endl;
    return 0;
}