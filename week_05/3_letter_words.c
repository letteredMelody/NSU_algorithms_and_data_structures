#include <stdio.h>

int main(){
  char t = ' ';
  int c = 0;

  while (t != '.'){
    scanf("%c", &t);
    c += 1;
    if (c == 2 && t != 'A'){
      printf("DOES NOT FIT");
      return 0;
    }
  }
  if (c == 4){
    printf("FITS");
  } else{
    printf("DOES NOT FIT");
  }

  return 0;
}