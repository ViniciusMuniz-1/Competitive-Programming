#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string texto; int k = 0;
    cin >> texto >> k;
    
    vector<string> ss(k);

    for(int i = 0; i < k; ++i){
        int index = i;
        while(index < texto.size()){
            ss[i] += texto[index];
            index+=k;
        }
    }

    for(int i = 0; i < ss.size(); ++i){
        sort(ss[i].begin(), ss[i].end());
    }

    

    cout << texto <<  '\n';
}