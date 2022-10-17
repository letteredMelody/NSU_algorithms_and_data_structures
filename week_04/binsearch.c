#include <stdio.h>
 
int search(int a[], int n, int t){
    int l = 0, r = n - 1;
 
    while (l <= r){
        int m = (l + r) / 2;
        
        if (a[m] <= t) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    
    if (a[r] == t) {
        return r;
    }
    if (a[l] == t) {
        return l;
    }
    
    return -1;
}
 
int main(){
  int n;
  scanf("%d", &n);
  int a[n];
 
  for (int i = 0; i < n; ++i){
    scanf("%d", &a[i]);
  }
 
  int q, y, t, m;
  scanf("%d", &q);
  scanf("%d", &y);
  int b[q];
 
  for (int i = 0; i < q; ++i){
    scanf("%d", &t);
    b[i] = search(a, n, y);
    printf("%d\n", b[i]);
    y = t + b[i];
  }
 
  return 0;
}