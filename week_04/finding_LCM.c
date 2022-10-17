#include <stdio.h>
#include <math.h>

long long nod(long long a, long long b){
    if (b == 0){
        return a;
    } else if (a == 0 || a % b == 0){
        return b;
    }

    long long t = b; 
    b = a % b; 
    a = t; 

    return nod(a,b);
}

long long nok(long long a, long long b){
    return a * b / nod(a, b);
}

int main(){
    int n;
    scanf("%d", &n);
    long long a, b;

    for (int i = 0; i < n; ++i){
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", nok(a,b));
    }

    return 0;
}