#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
    long long n1, num, soma = 0, contunder = 0, contabove = 0;

    cin >> n1;

    vi nums;

    for(int i = 0; i  < n1; ++i){
        cin >> num;
        nums.push_back(num);
        soma += nums[i];
    }

    double media = (double)soma/(double)n1;

    for(int i = 0; i < n1; ++i){
        if(nums[i] < media){
            contunder++;
        }
        else{
            contabove++;
        }
    }
    cout << fixed << setprecision(1);
    cout << media << endl << contunder << endl << contabove << endl;
}