#include <stdio.h>
#include <string.h>

int main(){
  int n, m, f, s = 0;
  char t;
  scanf("%d %d", &n, &m);
  char p[n][m];
  scanf("%d", &f);
  scanf("%c", &t);
  f -= 1;

  for (int i = 0; i < n; ++i){
    for (int j = 0; j < m; ++j){
      scanf("%c", &p[i][j]);
    }
    scanf("%c", &t);
  }

  t = '0';
  int i = 0;
  int j = f;

  while ((i < n) && (j < m) && (i >= 0) && (j >= 0)){
    if (p[i][j] == 'N'){
      p[i][j] = s;
      i -= 1;
      s += 1;
    } else if (p[i][j] == 'S'){
      p[i][j] = s;
      i += 1;
      s += 1;
    } else if (p[i][j] == 'E'){
      p[i][j] = s;
      j += 1;
      s += 1;
    } else if (p[i][j] == 'W'){
      p[i][j] = s;
      j -= 1;
      s += 1;
    } else{
      printf("%d step(s) before a loop of %d step(s)", p[i][j], s - p[i][j]);
      return 0;
    }
  }
  
  printf("%d step(s) to exit", (int)s);

  return 0;
}