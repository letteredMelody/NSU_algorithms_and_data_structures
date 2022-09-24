#include <stdio.h>
#include <math.h>

int main(){
    int N, num, positive = 0, zero = 0, negative = 0;
    double a;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i){
        scanf("%d", &num);
        if (num > 0){
            positive += 1;
        }
        if (num == 0){
            zero += 1;
        }
        if (num < 0){
            negative += 1;
        }
    }
 
    printf("%0.5lf %0.5lf %0.5lf",((double)negative / N),((double)zero / N),((double)positive / N));
   
    return 0;
}