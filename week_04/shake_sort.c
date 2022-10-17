#include <stdio.h>

void sort(int a[], int n){
    int l = 0, r = n - 1, f = 1, i, t;

    while (f){
        f = 0;
        i = l;
        while (i < r){
            if (a[i] > a[i + 1]){
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                f = 1;
            }
            i = i + 1;
        }
        r = r - 1;
        if (f){
            f = 0;
            i = r;
            while (i > l){
                if (a[i] < a[i - 1]){
                    t = a[i];
                    a[i] = a[i - 1];
                    a[i - 1] = t;
                    f = 1;
                }
                i = i - 1;
            } 
        }
        l = l + 1;
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