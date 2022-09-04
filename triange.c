#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2, x3, y3;
    double len1, len2, len3, per, hPer, pl;

    scanf("%d%d", &x1, &y1);
    scanf("%d%d", &x2, &y2);
    scanf("%d%d", &x3, &y3);

    len1 = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    len2 = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    len3 = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    
    per = len1+len2+len3;
    
    printf("%0.3lf \n", per);
    
    hPer = per/2;
    pl = sqrt(hPer*(hPer-len1)*(hPer-len2)*(hPer-len3));
    
    printf("%0.3lf", pl);
    
    return 0;
}        