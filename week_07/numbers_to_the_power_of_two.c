#include <stdio.h>

int main(){
  int n, t;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i){
    scanf("%d", &t);
    int s = 0;
    while ((t % (1 << s)) == 0){
      s += 1;
    }
    printf("%d\n", 1 << (s - 1));
  }

  return 0;
}