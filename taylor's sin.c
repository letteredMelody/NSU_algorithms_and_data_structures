#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int fact(int x){
    int f = 1;

    for (int i = x; i > 0; --i){
        f *= i;
    }

    return f;
}

double si(double x){
    x = x - (long long)(x / 2 / PI) * 2 * PI;

    double ans = x, c = x;
    int f;
    
    for (int i = 1; i < 150; ++i){
        f = 2 * i + 1;
        ans += c * (-((x * x)/(f*(f-1))));
        c = c * (-((x * x)/(f*(f-1))));
    }

    return ans;
}

int main(){
    int n;
    scanf("%d", &n);
    double x;

    for (int i = 0; i < n; ++i){
        scanf("%lf", &x);
        printf("%0.15lf\n", si(x));
    }
    
    return 0;
}