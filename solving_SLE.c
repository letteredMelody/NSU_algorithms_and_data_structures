#include <stdio.h>

int main(){
    int n;
    double t;
    scanf("%d", &n);
    double m[201][201];
    double x[n];
    
    for (int i = 0; i < n; ++i){ //считывание
        for (int j = 0; j < n; ++j){
            scanf("%lf", &m[i][j]);
        }
    }
    for (int i = 0; i < n; ++i){ //приписываем коэффициенты
        scanf("%lf", &m[i][n]); 
    }
    for (int k = 0; k < n - 1; ++k){ //к - переменная, уменьшающая размер массива, с которым мы работаем, по строкам и стобцам
        if (m[k][k] == 0){ // если первый элемент равен нулю, то ищем ненулевую строку, прибавляем к первой
            for (int i = k + 1; i < n; ++i){
                if (m[i][k] != 0){
                    for (int j = 0; j < n + 1; ++j){
                        m[k][j] += m[i][j];
                    }
                    break;
                }
            }
        }
        for (int i = k + 1; i < n; ++i){ //начиная со второй строки, зануляем, умножая на коэффициент
            t = -m[i][k]/m[k][k];
            for (int j = 0; j < n + 1; ++j){
                m[i][j] += m[k][j] * t;
            }
        }
    }
    for (int i = n - 1; i >= 0; --i){
        t = 0;
        for (int j = n - 1; j > i; --j){
            t = t + x[j] * m[i][j];
        }
        x[i] = (m[i][n] - t)/m[i][i];
    }
    for (int i = 0; i < n; ++i){
        printf("%.2lf ", x[i]);
    }

    return 0;
}