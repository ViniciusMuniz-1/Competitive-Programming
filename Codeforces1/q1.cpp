#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int cont = 1;
    int maior = 0;
 
    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i + 1]) {
            cont++;
        } else {
            cont = 1;
        }
        if (cont > maior) {
            maior = cont;
        }
    }
 
    cout << maior << endl;
 
    return 0;
}