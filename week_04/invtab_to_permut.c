#include <stdio.h>

int inversed(int n, int p[], int inv[]){
    int t;

    for (int i = 1; i < n + 1; ++i){
        t = p[i-1] + 1;
        for (int j = 0; j < n; ++j){
            if (inv[j] == 0){
                t -= 1;
                if (t == 0){
                    inv[j] = i;
                }
            }
        }
        if (t > 0){
            printf("NO"); 
            return 0;
        }
    }
    if (t <= 0){
        for (int i = 0; i < n; ++i){
            printf("%d ", inv[i]);
        }
    }
    
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int p[n];
    int inv[n];

    for (int i = 0; i < n; ++i){
        scanf("%d", &p[i]);
        inv[i] = 0;
    }
    
    inversed(n, p, inv);

    return 0;
}