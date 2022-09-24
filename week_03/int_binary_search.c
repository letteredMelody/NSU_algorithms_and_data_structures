#include <stdio.h>

int main(){
    int N, X, elem, middle, flag = 0;
    int array[N];
    scanf("%d %d", &N, &X);

    for (int i = 0; i < N; ++i){
        scanf("%d", &elem);
        array[i] = elem;
    }

    int left = 0, right = N - 1;

    while (left <= right){
        middle = (left + right) / 2;
        if (X == array[middle]){
            printf("%d", middle);
            flag = 1;
            break;
        } else {
            if (array[middle] < X) {
                left = middle + 1;
            } else {
                right = middle - 1;
            }
        }
    }
    if (flag == 0) {
        printf("%d", -1);
    }
    
    return 0;
}