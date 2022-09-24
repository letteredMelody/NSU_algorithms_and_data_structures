#include <stdio.h>
#include <math.h>
 
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d ", (int)floor((float)a/b));
    printf("%d ", (int)ceil((float)a/b));
    printf("%d", (a/b));
 
    if (a>=0)
        printf(" %d",(a%b));
    else 
        printf(" %d",((b+a%b)%b));
 
    return 0;
}  