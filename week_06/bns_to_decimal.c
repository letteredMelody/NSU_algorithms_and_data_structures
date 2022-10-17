#include <stdio.h>
#include <string.h>

int main(){
  int b, k, n = 0, s = 1;
  scanf("%d", &b);
  char a[100000];
  scanf("%s", a);
  k = strlen(a);

  for (int i = 0; i < k; ++i){
    if (a[i] >= 'a'){
      a[i] = (int)(a[i] - 'a' + 10);
    }else{
      a[i] = (int)(a[i] - 48);
    }
  }
  for (int i = k - 1; i >= 0; --i){
    n = n + a[i] * s;
    s = s * b;
  }

  printf("%d", n);

  return 0;
}