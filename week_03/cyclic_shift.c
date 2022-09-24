#include <stdio.h>

int main(){
    int n, k, elem;
    int array[n];
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; ++i){
        scanf("%d", &elem);
        array[i] = elem;
    }

    k = k % n;
    
    for (int i = n - k; i < n; ++i){
        printf("%d ", array[i]);
    }
    for (int i = 0; i < n - k; ++i){
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}