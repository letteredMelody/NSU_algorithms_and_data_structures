#include <stdio.h>

int main(){
    int N, elem, sum, max_sum = - 10001, L, R;
    int array[N];
    scanf("%d", &N);

    for (int i = 0; i < N; ++i){
        scanf("%d", &elem);
        array[i] = elem;
    }
    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j){
            sum += array[j];
            if (sum > max_sum) {
                max_sum = sum;
                L = i;
                R = j;
            }
        }
        sum = 0;
    }
    
    printf("%d %d %d", L, R, max_sum);

    return 0;
}