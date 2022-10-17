#include <stdio.h>

void sort(int a[], int n){
    int j, x;

    for (int i = 1; i < n; ++i){
        x = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > x){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = x;
    }
    for (int i = 0; i < n; ++i){
        printf("%d ", a[i]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }

    sort(a, n);

    return 0;
}