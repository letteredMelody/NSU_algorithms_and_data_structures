#include <stdio.h>
#include <math.h>

int main() {
    int h,m,s,sec;
    
    scanf("%d %d %d %d", &h, &m, &s, &sec);
    
    s += sec;
    m += s/60;
    s = s%60; 
    h += m/60; 
    m = m%60; 
    h = h%24; 

    printf("%d %d %d", h, m, s);
      
    return 0;
}      