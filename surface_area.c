#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z, pl, no;
    scanf("%d %d %d", &x, &y, &z);
    
    if (x<=0)
        no = -1;
    else if (y<=0)
        no = -2;
    else if (z<=0)
        no = -3;
        
    if (no<0)
        printf("%d", no);
    else
        {pl = 2*((x*y)+(x*z)+(y*z));
        printf("%d",pl);}
        
    return 0;
}    