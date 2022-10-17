#include <stdio.h>

void next(char a[], int n){
    int t, m = 1001, p, r;
    
    if (n == 1){
        printf("%d", a[n-1]);
        return;
    } else{
        for (int i = n - 1; i > 0; --i){ //Цикл ищет первый случай, где элементы идут не в порядке убывания
            if (a[i-1] > a[i]){
                if (i == 1){ //Если вообще все элементы идут в порядке убывания, значит, это последняя по алфавиту перестановка, нужно распечатать первую
                    for (int j = n - 1; j >= 0; --j){
                        printf("%d ", a[j]);
                    }
                    return;
                }
            } else if (a[i - 1] < a[i]){
                t = i - 1; //Найдя первый элемент, где порядок нарушен, сохраняет номер
                break;
            }
        }
        for (int i = t + 1; i < n; ++i){ //Ищет в получившемся промежутке наименьший элемент, больший него
            if (a[i] > a[t] && a[i] < m){
                m = a[i];
                p = i;
            }
        }

        r = a[t]; //Найдя, меняет их местами
        a[t] = a[p];
        a[p] = r;
        
        for (int i = 0; i <= t; ++i){ //Выводит первую часть как обычно, а подпоследовательность, с которой работали - в обратном порядке
            printf("%c ", a[i]);
        }
        for (int i = n - 1; i > t; --i){
            printf("%c ", a[i]);
        }
    }
}

int main(){
  int N;
  char t;
  scanf("%d", &N);
  char a[N];

  for (int i = 0; i < N; ++i){
    scanf(" %c", &a[i]);
  }

  next(a, N);

  return 0;
}