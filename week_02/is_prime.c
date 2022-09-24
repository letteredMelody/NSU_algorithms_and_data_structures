#include <stdio.h>

int main(){
    int N, div = 0;
    scanf("%d", &N);
    
    for (int i = 1; i < (N + 1); ++i){
        if ((N % i) == 0){
            div += 1;
        }
    }
    if (div == 2){
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    return 0;
}