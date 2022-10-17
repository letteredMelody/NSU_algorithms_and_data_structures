#include <stdio.h>
#include <string.h>

int main(){
  int a, b;
  scanf ("%d%d", &a, &b);

  if (b == 0){
    printf ("0");
  } else{
    int c[100];
    int i;
    for (i = 0; b > 0; ++i){
      c[i] = b % a;
      b /= a;
    }
    for (int j = i - 1; j >= 0; --j){
      if (c[j] > 9){
        printf ("%c", (char)(c[j] - 10 + 97));
      } else{
        printf("%d", c[j]);
      }
    }
  }

  return 0;
}