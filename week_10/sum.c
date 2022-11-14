#include <stdio.h>

int convert(int n){
    unsigned int x;
    unsigned char b0, b1, b2, b3;
    x = (unsigned int)n;
    b0 = (unsigned char)x;
    b1 = (unsigned char)(x >> 8);
    b2 = (unsigned char)(x >> 16);
    b3 = (unsigned char)(x >> 24);

    return (int)(((unsigned int)b0 << 24) | ((unsigned int)b1 << 16) | ((unsigned int)b2 << 8) | (unsigned int)b3);
}

int main(){
    FILE *fi; 
    int n, c, s = 0, b;
    fi = fopen("input.bin", "rb");
    fread(&n, 4, 1, fi);
    b = ((n <= 10000)? 1: 0);

    if (b == 0){
        n = convert(n);
    }
    for (int i = 0; i < n; ++i){
        fread(&c, 4, 1, fi);
        if (b == 1){
            s += c;
        } else{
            s += convert(c);
        }
    }
    if (b == 0){
        s = convert(s);
    }

    fclose(fi);
    fi = fopen("output.bin", "wb");
    fwrite(&s, 4, 1, fi);
    fclose(fi);
    
    return 0;
}