#include <stdio.h>

int main(){
    int n = 0; scanf("%d", &n);
    int nums[n];
    int cont = 0;
    //Separate evens and odds on the sequence
    for(int i = 1; i < n+1; i++){
        if(i%2!=0){
            nums[cont] = i;
            cont++;
        }
        else{
            nums[cont+1] = i;
            cont++;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", nums[i]);
    }
}