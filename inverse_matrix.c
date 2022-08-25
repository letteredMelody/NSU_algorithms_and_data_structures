#include <stdio.h>

#define fabs(a) (a>0?a:-a)

int main(){
    int n;
    double det = 1, s = 0, t;
    if(scanf("%d", &n) == -1) {
        printf("DOES NOT EXIST");
        return 0;
    }
    double m[201][402];
    
    for (int i = 0; i < n; ++i){ //считывание
        for (int j = 0; j < n; ++j){
            if(scanf("%lf", &m[i][j]) == -1){
                printf("DOES NOT EXIST");
                return 0;
            }
        }
    }
    for (int i = 0; i < n; ++i){ //приписываем едининичную матрицу
        for (int j = n; j < n * 2; ++j){
            if (j - i == n){
                m[i][j] = 1;
            } else{
                m[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; ++i){ //ищем столбец, полный нулей, если нашли - матрица вырожденная
        s = 0;
        for (int j = 0; j < n; ++j){
            if (m[j][i] != 0){
                s += 1;
                break;
            }
        }
        if (s == 0){
            printf("DOES NOT EXIST");
            return 0;
        }
    }
    for (int k = 0; k < n - 1; ++k){ //к - переменная, уменьшающая размер массива, с которым мы работаем, по строкам и стобцам
        if (m[k][k] == 0){ // если первый элемент равен нулю, то ищем ненулевую строку, прибавляем к первой
            for (int i = k + 1; i < n; ++i){
                if (m[i][k] != 0){
                    for (int j = 0; j < n * 2; ++j){
                        m[k][j] += m[i][j];
                    }
                    break;
                }
            }
        }
        for (int i = k + 1; i < n; ++i){ //начиная со второй строки, зануляем, умножая на коэффициент
            t = -m[i][k]/m[k][k];
            for (int j = 0; j < n * 2; ++j){
                m[i][j] += m[k][j] * t;
            }
        }
        det *= m[k][k];
    }
    det = det * m[n-1][n-1];
    
    if (fabs(det) < 0.001){ // если определитель равен нулю, матрица вырожденная
        printf("DOES NOT EXIST");
        return 0;
    }
    for (int j = n - 1; j >= 0; --j) { // начиная с конца левой матрицы, зануляем верхние элементы, превращая её в диагональную
        double mjj = m[j][j];
        for (int i = j - 1; i >= 0; --i) { 
            t = -m[i][j] / mjj; 
            for (int k = 0; k < n * 2; ++k) { 
                m[i][k] += m[j][k] * t;
            }
        }
        for (int l = 0; l < n * 2; ++l) { // умножаем каждую строку на обратный элемент, чтобы получить единичную матрицу
            m[j][l] *= 1 / mjj;
        }
    }

    for (int i = 0; i < n; ++i){ // бета-версия вывода, чтобы нагляднее видеть, как работает, при сдаче будет выводиться часть от n до n * 2
        for (int j = n; j < n * 2; ++j){
           printf("%.2lf ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}