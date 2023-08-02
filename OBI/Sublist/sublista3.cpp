#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

bool sublista(vi &sa, vi &sb){
    if(sb.size()==0) return true;
    if(sa.size()==0) return false;
    if(sa.back()==sb.back()) sb.pop_back();
    sa.pop_back();
    return sublista(sa,sb);
}

int main(){
    int a,b;
    cin >> a >> b;
    vi x(a), y(b);
    
    for( int &i: x) cin >> i;
    for( int &i: y) cin >> i;

    cout << (sublista(x,y)?"S\n":"N\n");

    return 0;
}