#include <stdio.h>
#include <math.h>

int main(){
    int n, closest_index;
    float elem, ans = 10000;
    scanf("%d", &n);

    for (int i = 1; i < (n + 1); ++i){
        scanf("%f", &elem);
        if ((ceil(elem) - elem) < (ans - 0.00001)){
            ans = ceil(elem) - elem;
            closest_index = i;
        }
        if ((elem - floor(elem)) < (ans - 0.00001)){
            ans = elem - floor(elem);
            closest_index = i;
        }
    }

    printf("%d", closest_index);
    
    return 0;
}