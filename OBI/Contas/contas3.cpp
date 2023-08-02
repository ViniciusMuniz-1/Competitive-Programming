#include <bits/stdc++.h>

int main(){
    using namespace std;
    
    int v, va, vf, vp;
    
    cin >> v >> va >> vf >> vp;
    int ans = 0;
    vector<int> contas;
    for(int = 0, i < 4; ++i){
        int x; cin >> x;
        contas.push_back(x);
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