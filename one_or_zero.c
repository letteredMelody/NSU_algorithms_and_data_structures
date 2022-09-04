#include <stdio.h>
#include <math.h>

int main(){
    int k;
    float N, D;
    scanf("%d",&k);
    D=1+4*(k-1)*2;
    N=sqrt(D);
    
    if ((N - ((int)N)) == 0)
        printf("1");
    else 
        printf("0");
            
    return 0;
}