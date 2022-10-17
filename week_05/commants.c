#include <stdio.h>

int main() {
    char t;
    int c = 0;

    while(scanf("%c", &t) == 1){
        if(t == '/'){
            c = 0;
            scanf("%c", &t);
                if(t == '/'){
                    while(scanf("%c", &t) == 1 && t != '\n'){
                        continue;
                    }
                    printf("\n");
                }else if(t == '*'){
                    while(scanf("%c", &t) == 1){
                        if(t == '\n'){
                            c = 0;
                            printf("\n");
                        }else if(t == '*'){
                            c = 1;
                        } else if(t == '/' && c == 1){
                            break;
                        } else{
                            c = 0;
                        }
                    }
                } else{
                    printf("/%c", t);
                }
        }else{
            printf("%c", t);
        }
    }
    
    return 0;
}