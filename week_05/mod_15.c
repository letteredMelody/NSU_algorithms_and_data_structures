#include <stdio.h>

int main(){
  char t = '0', a = '0';
  int s = 0;

  while (t != '.'){
    a = t;
    scanf("%c", &t);
    s = s + (a - '0');
  }
  if ((a == '5' || a == '0') && s % 3 == 0){
    printf("YES");
  } else{
    printf("NO");
  }

  return 0;
}