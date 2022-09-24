#include <stdio.h>

int main(){
    int N, elem, amount;
    int array[N];
    scanf("%d", &N);
    
    for (int i = 0; i < N; ++i) {
        scanf("%d", &elem);
        array[i] = elem;
    }
    for (int i = 0; i < N; ++i) {
        amount = 0;
        for (int j = i; j < N; ++j) {
            if (array[j] < array[i]) {
                amount += 1;
            }
        }
        printf("%d ", amount);
    }
    
    return 0;
}