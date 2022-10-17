#include <stdio.h>

int func(int *a, int b[][2], int n, int m){
    int t, y, p, s;

    for (int j = 1; j < n + 1; ++j){
        y = 0;
        t = n + 1;
        p = n + 1;
        s = 0;
        for (int i = 0; i < m; ++i){
            if (b[i][0] == j){
                y = 1;
                if (t == n + 1){
                    t = b[i][1];
                } else if (t != b[i][1]){
                    a[0] = 0;

                    return 0;
                }
            }
            if (b[i][1] == j){
                s = 1;
                if (p == n + 1){
                    p = b[i][0];
                } else if (p != b[i][0]){
                    a[2] = 0;
                }
            }
        }
        if (y == 0){
            a[1] = 0;
        }
        if (s == 0){
            a[3] = 0;
        }
    }
    if (a[2] == 0 || a[3] == 0){
        a[4] = 0;
    }

    return 1;
}

int main(){
    int n, m;
    int a[5] = {1, 2, 3, 4, 5};
    scanf("%d %d", &n, &m);
    int b[m][2];

    for (int i = 0; i < m; ++i){
        scanf("%d %d", &b[i][0], &b[i][1]);
    }

    if (func(a,b,n,m)){
        for (int i = 0; i < 5; ++i){
            if (a[i] != 0){
                printf("%d ", a[i]);
            }
        }
    } else {
        printf("%d", 0);
    }

    return 0;
}