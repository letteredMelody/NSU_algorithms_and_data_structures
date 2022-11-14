#include <stdio.h>
#include <math.h>

int main(){
    FILE *fi; 
    int a, b, c;
    fi = fopen("input.bin", "rb");
    fread(&a, 4, 1, fi);
    fread(&b, 4, 1, fi);
    c = (int)floor(((double)a + (double)b) * 0.5);
    fclose(fi); 
    fi = fopen("output.bin", "wb");
    fwrite(&c, 4, 1, fi);
    fclose(fi); 

    return 0;
}