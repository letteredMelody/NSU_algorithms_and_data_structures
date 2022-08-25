#include <stdio.h>
#include <stdlib.h>

int Try(int i, char** matrix, int m, int n){
    int k, no, c, q = 0;

    if (n >= m){
        c = n;
    } else{
        c = m;
    }

    for (int k = 0; k < n; ++k){
        if (matrix[i][k] != '.'){
            no = 0;
            for (int j = 0; j < c; ++j){
                if (j < m){
                    if (matrix[j][k] == 'X'){
                        no = 1;
                    }
                }
                if (j < n){
                    if (matrix[i][j] == 'X'){
                        no = 1;
                    }
                }
                if (i + j < m && k + j < n){
                    if (matrix[i + j][k + j] == 'X'){
                        no = 1;
                    }
                }
                if (i - j >= 0 && k - j >= 0){
                    if (matrix[i - j][k - j] == 'X'){
                        no = 1;
                    }
                }
                if (i - j >= 0 && k + j < n){
                    if (matrix[i - j][k + j] == 'X'){
                        no = 1;
                    }
                }
                if (i + j < m && k - j >= 0){
                    if (matrix[i + j][k - j] == 'X'){
                        no = 1;
                    }
                }
                if (no == 1){
                    break;
                }
            }
            if (no == 1){
                matrix[i][k] = '?';
            } else {
                matrix[i][k] = 'X';
                if (i < m - 1){
                    q = Try(i + 1, matrix, m, n);
                    if (q == 0){
                        matrix[i][k] = '?';
                    }
                } else{
                    q = 1;
                }
            }
        }
    }

    return q;
}

int main(){
    int m, n;
    char t;
    scanf("%d %d", &m, &n);
    char** matrix = (char**)malloc(m * sizeof(char*));

    for(int i = 0; i < m; ++i) {
        matrix[i] = (char*)malloc(n * sizeof(char));
    }

    for (int i = 0; i < m; ++i){
        scanf("%s", matrix[i]);
        scanf("%c", &t);
    }

    if (Try(0, matrix, m, n) == 1){
        printf("YES\n");
        for (int i = 0; i < m; ++i){
            for (int j = 0; j < n; ++j){
                if (matrix[i][j] == '?'){
                    printf(".");
                } else{
                    printf("%c", matrix[i][j]);
                }
            }
            printf("\n");
        }
    } else{
       printf("NO");
    }

    return 0;
}