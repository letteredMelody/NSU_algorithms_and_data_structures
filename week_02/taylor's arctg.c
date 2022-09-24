#include <stdio.h>
#include <math.h>

int main(){
    float x, eps, term = 1, sum = 0;
    int n = 0;
    scanf("%f", &x);
    scanf("%f", &eps);
    
    while (fabs(term) >= eps) {
        term = (pow(-1, n) * pow(x, (2 * n + 1))) / (2 * n + 1);
        sum += term;
        n += 1;
    }
    
    printf("%0.5lf", sum);
    
    return 0;
}