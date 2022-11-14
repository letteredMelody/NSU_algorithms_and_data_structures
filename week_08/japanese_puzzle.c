#include <stdio.h>

int main(){
  int n, m;
  scanf("%d %d", &n, &m);
  int c[n][m];

  for (int i = 0; i < n; ++i){
    for (int j = 0; j < m; ++j){
      scanf("%d", &c[i][j]);
    }
  }
  for (int i = 0; i < n; ++i){
    int k = 0;
    for (int j = 0; j < m; ++j){
      if (c[i][j] == 1){
        k += 1;
      } else{
        if (k > 0){
          printf("%d ", k);
        }
        k = 0;
      }
      if (j == m - 1 && k > 0){
        printf("%d ", k);
      }
    }
    printf("\n");
  }
  for (int i = 0; i < m; ++i){
    int k = 0;
    for (int j = 0; j < n; ++j){
      if (c[j][i] == 1){
        k += 1;
      } else{
        if (k > 0){
          printf("%d ", k);
        }
        k = 0;
      }
      if (j == n - 1 && k > 0){
        printf("%d ", k);
      }
    }
    printf("\n");
  }

  return 0;
}