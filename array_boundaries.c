#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if (b>=a)
        printf("out of bounds");
    else if (b<0)
        printf("out of bounds");
    else
        printf("legal");

    return 0;
}           