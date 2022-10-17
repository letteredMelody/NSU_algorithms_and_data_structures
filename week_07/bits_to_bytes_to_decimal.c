#include <stdio.h>
#include <math.h>

int main(){
  int n, s = 0;
  char t;
  scanf("%d", &n);
  scanf("%c", &t);

  for (int i = 0; i < n; ++i){
    if (i % 8 == 0 && i != 0){
      printf("%d ", s);
      s = 0;
    }
    scanf("%c", &t);
    s += (t - 48) * pow(2, i % 8);
  }

  printf("%d", s);

  return 0;
}