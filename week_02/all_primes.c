#include <stdio.h>
#include <math.h>

int main(){
    int N, prime;
    scanf("%d", &N);
    
    for (int i = 2; i < (N + 1); ++i){
        prime = 1;
        for (int j = 1; j < (sqrt(N)); ++j){
            if ((i % j) == 0 && i > j){
                prime += 1;
            }
        }
        if (prime == 2) {
            printf("%d ", i);
        }
        
    }
    
    return 0;
}