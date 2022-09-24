#include <stdio.h>
#include <math.h>

int main(){
    int N, reversed = 0;
    scanf("%d", &N);
    
    while (N >= 10){
        if (((N % 10) == 0) && (reversed == 0)){
            reversed = reversed;
        } else{
            reversed = (reversed * 10) + (N % 10); 
        }
        N = N / 10;
    }
    reversed = (reversed * 10) + (N % 10);
    
    printf("%d", reversed);
   
    return 0;
}