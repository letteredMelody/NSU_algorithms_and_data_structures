#include <stdio.h>

int main(){
    int N, elem, sum = 0;
    scanf("%d", &N);
    
    for (int i = 0; i < N; ++i){
        elem = 0;
        scanf("%d", &elem);
        if (elem % 2 == 0){
            sum += elem;
        }
    }
    
    printf("%d", sum);

    return 0;
}