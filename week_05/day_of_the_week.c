#include <stdio.h>

int main(){
  char c1, c2, c3;
  scanf("%c%c%c", &c1, &c2, &c3);

  if (c1 == 'M'){
    printf("%d",1);
  } else if (c1 == 'W'){
    printf("%d", 3);
  } else if (c1 == 'F'){
    printf("%d", 5);
  } else if (c1 == 'T'){
    if (c2 == 'u'){
      printf("%d", 2);
    } else{
      printf("%d", 4);
    }
  } else if (c1 == 'S'){
    if (c2 == 'a'){
      printf("%d", 6);
    } else{
      printf("%d", 7);
    }
  }

  return 0;
}