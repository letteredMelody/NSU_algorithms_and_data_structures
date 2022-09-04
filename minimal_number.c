#include <stdio.h>

int main(){
    int a, b, c, min = 100000;
    scanf("%d %d %d", &a, &b, &c);

    if (a <= min)
        min = a;
    if (b <= min)
        min = b;
    if (c <= min)
        min = c;

    printf("%d",min);
    
    return 0;
}                