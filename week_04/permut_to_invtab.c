#include <stdio.h>

void inversed(int n, int p[], int inv[]){
    for (int i = 1; i < n + 1; ++i){
        for (int j = 0; j < n; ++j){
            if (p[j] > i){
                inv[i-1] += 1;
            } else {
                if (p[j] == i){
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i){
        printf("%d ",inv[i]);
    }
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