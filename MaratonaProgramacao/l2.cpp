#include <bits/stdc++.h>


using namespace std;

typedef vector<int> vi;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string texto; int k = 0;
    cin >> texto >> k;

    string temp1;

        
    do{
        temp1 = texto;
        for(unsigned int i = 0; i < texto.length() - k; i++){
            if(texto[i] > texto[i+k]){
                char temp = texto[i];
                texto[i] = texto[i+k];
                texto[i+k] = temp;
            }
        }
        if(!lexicographical_compare(texto.begin(), texto.end(), temp1.begin(), temp1.end())){{
            break;
        }}
    }
    while(lexicographical_compare(texto.begin(), texto.end(), temp1.begin(), temp1.end()));
    

    cout << texto <<  '\n';
}