#include <stdio.h>
#include <math.h>

int main(){
  int N, elem = -1, min = 0;
  int array[N - 1];
  scanf("%d", &N);

  for (int i = 0; i < (N - 1); ++i) {
    array[i] = i + 2;
  }
  while (min == 0) {
    elem += 1;
    min = array[elem];
  }
  while (pow(min, 2) <= N) {
    for (int i = pow(elem + 2, 2) - 2; i < (N - 1); i += min) {
      array[i] = 0;
    }
    while (array[elem + 1] == 0) {
      elem += 1;
    }
    min = array[elem + 1];
    elem += 1;
  }
  for (int i = 0; i < N - 1; ++i) {
    if (array[i] != 0) {
      printf("%d ", array[i]);
    }
  }

  return 0;
}