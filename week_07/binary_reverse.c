#include <stdio.h>

int main(){
  int n, k = 0;
  scanf("%d", &n);

  for (int i = 31; i >=0; --i){
    if ((n & (1<<i)) == 0){
      printf("0");
    } else{
      printf("1");
    }
  }

  printf("\n");

  for (int i = 0; i < 32; ++i){
    if ((n & (1<<i)) != 0){
      k|=(1<<(31-i));
    }
  }

  printf("%d\n", k);

  for (int i = 31; i >=0; --i){
    if ((k & (1<<i)) == 0){
      printf("0");
    } else{
      printf("1");
    }
  }

  printf("\n");

  return 0;
}