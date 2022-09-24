#include <stdio.h>
#include <math.h>

int main(){
  int a, b, c, D;
  scanf ("%d%d%d", &a, &b, &c);
  
  D = (b*b)-(4*a*c);
  
  if (D<0) {
      printf("NO");
    } 
  else if (a == 0 && b == 0 && c == 0) {
      printf("MANY");
    } 
  else if (a == 0 && b == 0) {
      printf("ERROR");
    }   
  else if (a == 0){
      printf("%d\n",1);
      printf("%0.5lf",(float)(-c)/b);
    }
  else if (D == 0) {
      printf("%d\n",1);
      printf("%0.5lf",(float)(-b)/(2*a));
    }
  else if (D > 0){
        if (a > 0) {
            printf("%d\n",2);
            printf("%0.5lf %0.5lf",((float)(-b)-sqrt(D))/(2*a),((float)(-b)+sqrt(D))/(2*a));
        }
      else if (a < 0) {
        printf("%d\n",2);
        printf("%0.5lf %0.5lf",((float)(-b)+sqrt(D))/(2*a),((float)(-b)-sqrt(D))/(2*a)); 
        }
    }

  return 0;
}