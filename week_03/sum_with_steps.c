#include <stdio.h>

int main(){
    int N, elem, sum, step = 0;
    scanf("%d", &N);
    int array[N];
    
    for (int i = 0; i < N; ++i) {
        scanf("%d", &elem);
        array[i] = elem;
    }
    for (int i = 0; i < N; ++i) {
        step += 1;
        sum = 0;
        for (int j = i; j < N; j = j + step) {
            sum += array[j];
        }
        printf("%d\n",sum);
    }

    return 0;
}