#include <stdio.h>

void sort(int a[], int n){
    int r, t;

    for (int i = 0; i < n - 1; ++i){
        r = i;
        for (int j = i + 1; j < n; ++j){
            if (a[j] < a[r]){
                r = j;
            }
        }
        t = a[i];
        a[i] = a[r];
        a[r] = t;
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