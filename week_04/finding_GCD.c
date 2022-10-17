#include <stdio.h>
#include <math.h>

int nod(int a, int b){
    int m = (a > b)?sqrt(a):sqrt(b);

    for (int i = m; i > 0; i -= 1){
        if (a % i == 0 && b % i == 0){
            return (i);
        }
    }
    
    return 0;
}

int main(){
    int a, b;
    
    scanf("%d %d", &a, &b);
    printf("%d", nod(a, b));

    return 0;
}