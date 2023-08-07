#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
    long long n1, num, soma = 0;

    cin >> n1;

    vi nums, numsunder, numsabove;

    for(int i = 0; i  < n1; ++i){
        cin >> num;
        nums.push_back(num);
        soma += nums[i];
    }

    double media = (double)soma/(double)n1;

    cout << fixed << setprecision(1);
    cout << media << endl;

    for(int i = 0; i < n1; ++i){
        if(nums[i] < media){
            numsunder.push_back(nums[i]);
        }
    }

    for(int i = 0; i < n1; ++i){
        if(nums[i] >= media){
            numsabove.push_back(nums[i]);
        }
    }

    cout << numsunder.size();
    for(unsigned int i = 0; i < numsunder.size(); ++i){
        cout << " " << numsunder[i];
    }

    cout << endl;
    
    cout << numsabove.size();
    for(unsigned int i = 0; i < numsabove.size(); ++i){
            cout << " " << numsabove[i];
    }

    cout << endl;
}