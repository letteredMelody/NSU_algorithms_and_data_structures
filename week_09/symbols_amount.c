#include <stdio.h> 

int main(){
  FILE *fi; 
  unsigned char c;
  int l[256] = {0}; 
  int cn = 0;
  fi = fopen("input.txt", "r");

  while (fscanf(fi, "%c", &c) != EOF){
    l[c] += 1;
  }

  fclose(fi); 
  fi = fopen("output.txt", "w");

  for (int i = 13; i < 256; ++i){
    if (l[i] != 0){
      if (cn == 0){
        fprintf(fi,"%d : %c - %d", i, i, l[i]); 
      } else{
        fprintf(fi,"\n%d : %c - %d", i, i, l[i]); 		
      }
      cn = 1;
    }
  }
  	
  fclose(fi);

	return 0;
}