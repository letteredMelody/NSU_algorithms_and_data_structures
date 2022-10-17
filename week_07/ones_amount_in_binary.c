#include <stdio.h>

int main(){
  int n, s = 0, ans = 0;
  scanf("%d", &n);

  for (int i = 0; i < 32; ++i){
    if ((n & (1 << i)) != 0){
      s += 1;
    } else{ 
      ans = ans > s? ans : s;
      s = 0;
    }
  }

  ans = ans > s? ans : s;
  printf("%d\n", ans);

  return 0;
}