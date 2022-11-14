#include <stdio.h>

typedef struct DateTime_s{
    int year, month, day;
    int hours, minutes, seconds;
} DateTime;

DateTime date(const DateTime *arr, int cnt){
    DateTime ans = {5000, 12, 31, 23, 59, 59};

    for (int i = 0; i < cnt; ++i){
        if((arr + i)->year < ans.year){
            ans = *(arr + i);
        } else if ((arr + i)->year == ans.year){
            if ((arr + i)->month < ans.month){
                ans = *(arr + i);
            } else if ((arr + i)->month == ans.month){
                if ((arr + i)->day < ans.day){
                    ans = *(arr + i);
                } else if ((arr + i)->day == ans.day){
                    if ((arr + i)->hours < ans.hours){
                        ans = *(arr + i);
                    } else if ((arr + i)->hours == ans.hours){
                        if ((arr + i)->minutes < ans.minutes){
                            ans = *(arr + i);
                        } else if ((arr + i)->minutes == ans.minutes){
                            if ((arr + i)->seconds < ans.seconds){
                                ans = *(arr + i);
                            }
                        }
                    }
                }
            }
        }
    }

    return ans;
}

int main(){
    int cnt, t;
    scanf("%d", &cnt);

    DateTime m[cnt];

    for (int i = 0; i < cnt; ++i){
        scanf("%d", &m[i].year);
        scanf("%d", &m[i].month);
        scanf("%d", &m[i].day);
        scanf("%d", &m[i].hours);
        scanf("%d", &m[i].minutes);
        scanf("%d", &m[i].seconds);
    }

    DateTime ans = date(m, cnt);

    printf("%d %d %d %d %d %d", ans.year, ans.month, ans.day, ans.hours, ans.minutes, ans.seconds);

    return 0;
}