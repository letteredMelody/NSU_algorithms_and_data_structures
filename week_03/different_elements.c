#include <stdio.h>
#define x 2002

int main (){
  int N, elem, amount = 0;
  int array[x];
  scanf("%d", &N);

  for (int i = 0; i < x; ++i) {
    array[i] = 0;
  }
  for (int i = 0; i < N; ++i){
    scanf("%d", &elem);
    array[elem + 1000] = 1;
  }
  for (int i = 0; i < x; ++i) {
    if (array[i] != 0) {
      amount += 1;
    }
  }
  
  printf("%d", amount);

  return 0;
}