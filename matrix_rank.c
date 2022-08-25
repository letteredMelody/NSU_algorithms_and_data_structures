#include <stdio.h>
#define fabs(a) (a>0?a:-a)
int main(){
    int k, n, d, c, ans;
    double s = 0, t;
    scanf("%d %d", &k, &n);
    double m[201][201];
    
    for (int i = 0; i < k; ++i){ //считывание
        for (int j = 0; j < n; ++j){
            scanf("%lf", &m[i][j]);
        }
    }
    for (int l = 0; l < n; ++l){ //к - переменная, уменьшающая размер массива, с которым мы работаем, по строкам и стобцам
        d = l;
        if (m[l][l] == 0){ // если первый элемент равен нулю, то ищем ненулевую строку, прибавляем к первой
            for (int i = l + 1; i < k; ++i){
                if (m[i][l] != 0){
                    for (int j = 0; j < n; ++j){
                        m[l][j] += m[i][j];
                    }
                    break;
                }
            }
        }
        for (int i = l; i < n; ++i){ //ищем столбец, полный нулей, если нашли - определитель равен нулю
            s = 0;
            for (int j = l; j < k; ++j){
                if (m[j][i] != 0){
                    s += 1;
                    break;
                }
            }
            if (s == 0){
                d += 1;
            } else{
                break;
            }
        }
        for (int i = l + 1; i < k; ++i){ //начиная со второй строки, зануляем, умножая на коэффициент
            t = -m[i][d]/m[l][d];
            for (int j = 0; j < n; ++j){
                m[i][j] += m[l][j]*t;
            }
        }
    }
    for (int i = 0; i < k; ++i){ //считывание
        c = 0;
        for (int j = 0; j < n; ++j){
            if (fabs(m[i][j]) > 0.001){
                c = 1;
                break;
            }
        }
        if (c != 0){
            ans += 1;
        }
    }
    if (ans != k){
        printf("%d false", ans);
    } else{
        printf("%d true", ans);
    }

    return 0;
}