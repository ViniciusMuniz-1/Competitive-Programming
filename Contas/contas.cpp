#include <bits/stdc++.h>

int main(){
    using namespace std;
    
    int v, va, vf, vp;
    
    cin >> v >> va >> vf >> vp;
    int ans = 0;
    if(v >= va+vf+vp){
        ans = 3;
    }
    else if(v>= va+vf or v>= va+vp or v >= vf+vp){
        ans = 2;
    }
    else if(v >= va or v >= vf or v>=vp){
        ans = 1;
    }
    cout << ans << endl;
    return 0;
}