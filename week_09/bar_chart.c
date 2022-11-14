#include <stdio.h> 
#include <string.h>

int main(){
  FILE *fi; 
  int l[127] = {0}; 
  char c;
  fi = fopen("input.txt", "r");

  while (fscanf(fi, "%c", &c) != EOF){
    l[c] += 1;
  }

  fclose(fi); 
  fi = fopen("output.txt", "w");

  for (int i = 32; i < 127; ++i){
    if (l[i] != 0){
      fprintf(fi,"%c ", i); 
      for (int j = 0; j < l[i]; ++j){
        fprintf(fi, "#");
      }
      fprintf(fi, "\n");
    }
  }
  	
  fclose(fi);

	return 0;
}