#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int N, X, middle;
    double elem;
    double array[N];
    scanf("%d %d", &N, &X);

    for (int i = 0; i < N; ++i){
        scanf("%lf", &elem);
        array[i] = elem;
    }

    int left = 0, right = N - 1;

    while (left <= right){
        middle = (left + right) / 2;
        if (X == array[middle]){
            printf("%d", middle);
            break;
        } else { 
            if (right - left > 1){
                if (array[middle] < X) {
                    left = middle;
                } else {
                    right = middle;
                }
            } else {
                if ((X > 0 && array[left] > 0 && array[right] > 0) || (X < 0 && array[left] < 0 && array[right] < 0)) {
                    if (fabs(abs(X) - fabs(array[left])) <= fabs(abs(X) - fabs(array[right]))){
                        printf("%d", left);
                        break;
                    } else {
                        printf("%d", right);
                        break;
                    }
                } else {
                    if ((X > 0 && array[left] > 0) || (X < 0 && array[left] < 0)){
                        printf("%d", left);
                        break;
                    } else {
                        printf("%d", right);
                        break;
                    }
                }
                
            }
        }
    }

    return 0;
}