#include <bits/stdc++.h>


using namespace std;

int main(){
    int hi, hf, tempo;

    cin >> hi >> hf;

    tempo = hf-hi;

    int tempoh = tempo/60;

    int tempom = tempo%60;

    cout << setfill('0') << setw(2) << tempoh << ":" << setw(2) << tempom << endl;
}