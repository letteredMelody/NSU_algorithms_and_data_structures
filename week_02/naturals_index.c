#include <stdio.h>
#include <math.h>

#define x 9 * i * pow(10, i - 1)

// k - номер символа от границы
// i - количество разрядов в нужном числе
// x - граница
// a - номер числа от границы
// b - номер символа в числе
// n - значение числа

int main(){
    int k, a, i, b, n;
    scanf("%d", &k); 
    
    for (i = 1; k - x > 0; ++i){
        k -= x;
    }
    
    a = (k + i - 1) / i;
    b = i - ((k - 1) % i);
    n = pow(10, i - 1) + a - 1;
    
    while (b > 1){
        b -= 1;
        n /= 10;
    }
    
    printf("%d", n%10);
    
    return 0;
}
