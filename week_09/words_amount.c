#include <stdio.h> 
#include <string.h>

int main(){
  FILE *fi; 
  int l[100] = {0}; 
  int cn = 0;
  char c[100];
  fi = fopen("input.txt", "r");

  while (fscanf(fi, "%s", c) == 1){
    l[strlen(c)] += 1;
  }

  fclose(fi); 
  fi = fopen("output.txt", "w");

  for (int i = 1; i < 100; ++i){
    if (l[i] != 0){
      fprintf(fi,"%d - %d\n", i, l[i]);  
    }
  }
  	
  fclose(fi);

	return 0;
}