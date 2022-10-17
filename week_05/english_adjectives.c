#include <stdio.h>

int main(){
  char a, s, t;
  scanf("%c", &s);
  scanf("%c", &t);

  while (t != '.'){
    a = s;
    printf("%c", a);
    s = t;
    scanf("%c", &t);
  }
  if (a == 'e' && s == 'r'){
    printf("st");
  } else if (s == 'e'){
    printf("er");
  } else{
    printf("%c", s);
    printf("er");
  }
  
  return 0;
}