#include <stdio.h>
#define w t == '0' || t == '1' || t == '2' || t == '3' || t == '4' || t == '5' || t == '6' || t == '7' || t == '8' || t == '9'

int main(){
    char t;
    int s = 0, m = 0, a = 0;

    while (t != '.'){
        scanf("%c", &t);
        if (w){
            s = 1;
            m = m * 10 + (t - '0');
        } else if (s == 1 && !(w)){
            a += m;
            m = 0;
            s = 0;
        }
    }

    printf("%d", a);

    return 0;
}