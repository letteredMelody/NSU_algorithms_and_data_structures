#include <stdio.h>
#define x 100000

int main (){
  int N, elem;
  int array[x];
  scanf("%d", &N);

  for (int i = 0; i < x; ++i) {
    array[i] = 0;
  }
  for (int i = 0; i < N; ++i){
    scanf("%d", &elem);
    array[elem] += 1;
  }
  for (int i = 0; i < x; ++i) {
    if (array[i] != 0) {
      printf("%d: %d\n", i, array[i]);
    }
  }

  return 0;
}