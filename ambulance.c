#include <stdio.h>
#include <math.h>

int main(){
    int N;
    int M, P, K, L;
    int nF,pD,B;
    
    scanf("%d",&N);
    scanf("%d%d%d%d",&M,&P,&K,&L);
    
    nF = M/((P-1)*L+K-1);
    B = ((N-1)/nF)+1;
    pD = 1;
    
    while (B>L) { 
        B -= L;
        pD += 1;
    }
    
    printf("%d %d",pD,B);
    
    return 0;
}