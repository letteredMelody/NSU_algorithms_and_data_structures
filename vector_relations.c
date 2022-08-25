#include <stdbool.h>
#include <stdio.h>
#define fabs(a) (a>0?a:-a)
 
int is_complanar(double a[3], double b[3], double c[3]) {
    double m = a[0]*(b[1]*c[2] - b[2]*c[1]) - a[1]*(b[0]*c[2] - b[2]*c[0]) + a[2]*(b[0]*c[1] - b[1]*c[0]);

    if (fabs(m) < 0.001){
        return 1;
    } else{
        return 0;
    }
}
 
int is_collinear(double a[3], double b[3]) {
    double c[3];
    c[0] =   a[1]*b[2] - a[2]*b[1];
    c[1] = - a[0]*b[2] + a[2]*b[0];
    c[2] =   a[0]*b[1] - a[1]*b[0];
    
    if (fabs(c[0]*c[0] + c[1]*c[1] + c[2]*c[2]) < 0.001){
        return 1;
    } else{
        return 0;
    }
}
 
int main(){
    double a[3][3];
    
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            scanf("%lf", &a[i][j]);
        }
    }
    
    printf(is_complanar(a[0], a[1], a[2]) == 1? "true\n": "false\n");
    
    int p[3] = {0};
    
    for (int i = 0; i < 3; ++i){
        int j = i;
        int k = (i + 1)%3;
        
        if (j > k){ 
            int t = j;
            j = k;
            k = t; 
        }
        
        if (is_collinear(a[j], a[k]) == 1){
            if (p[j] == 0){
                p[j] = 1;
                printf("%.2lf %.2lf %.2lf\n", a[j][0], a[j][1], a[j][2]);
            }
            if(p[k] == 0) {
                p[k] = 1;
                printf("%.2lf %.2lf %.2lf\n", a[k][0], a[k][1], a[k][2]);
            }
        }
    }
    
    return 0;
}