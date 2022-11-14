#include <stdio.h> 

int main(){
  FILE *fi; 
  char c;
  int cn = 0;
  fi = fopen("input.txt", "r");

  while (fscanf(fi, "%c", &c) != EOF){
    if (c == '\n'){
      cn += 1;
    }
  }

  fclose(fi); 
  fi = fopen("output.txt", "w");
  fprintf(fi,"%d", cn);  
  fclose(fi);

	return 0;
}