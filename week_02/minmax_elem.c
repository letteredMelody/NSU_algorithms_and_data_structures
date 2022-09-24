#include <stdio.h>
#include <math.h>

int main(){
    int N, elem, min = 10000, max= -10000, min_index, max_index;
    scanf("%d", &N);

    for (int i = 1; i < (N + 1); ++i){
       scanf("%d", &elem);
       if (elem < min){
           min = elem;
           min_index = i;
       }
       if (elem > max){
           max = elem;
           max_index = i;
       }
    }

    printf("%d %d %d %d", min, min_index, max, max_index);
    
    return 0;
}