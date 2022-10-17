#include <stdio.h>

int main(){
  char p, ch;
  int s = 0, c = 0;

  while (p != '\n'){
    ch = p;
    scanf("%c", &p);
    if (p != '.' && s == 0){
      s = 1;
    } else if (p == '.' && s == 1){
      c += 1;
      s = 0;
    }
  }
  if (ch != '.'){
    c += 1;
  }
  
  printf("%d", c);
  
  return 0;
}