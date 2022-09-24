#include <stdio.h>
#include <stdlib.h>
#define leap_year (i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)

int main(){
    int first_total = -1, second_total = -1, difference;
    int fisrt_days, first_month, first_year;
    scanf("%d %d %d", &fisrt_days, &first_month, &first_year);
    int second_days, second_month, second_year;
    scanf("%d %d %d", &second_days, &second_month, &second_year);
    int days_amount[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (first_month < 1 || first_month > 12 || second_month < 1 || second_month > 12 || first_year < 1 || first_year > 2050 || second_year < 1 || second_year > 2050){
        printf("ERROR");
        return 0;
    } else{
        if (fisrt_days > ((first_month == 2 && ((first_year % 400 == 0) || (first_year % 4 == 0 && first_year % 100 != 0)))?29:days_amount[first_month-1]) || fisrt_days < 1 || second_days > ((second_month == 2 && ((second_year % 400 == 0) || (second_year % 4 == 0 && second_year % 100 != 0)))?29:days_amount[second_month-1]) || second_days < 1){
            printf("ERROR");
            return 0;
        }
    }
    for (int i = 1; i < first_year; ++i){
        if (leap_year){
            first_total += 366;
        } else{
            first_total += 365;
        }
    }
    for (int i = 1; i < second_year; ++i){
        if (leap_year){
            second_total += 366;
        } else{
            second_total += 365;
        }
    }
    for (int i = 1; i < first_month; ++i){
        if ((leap_year) && i == 2){
            first_total += 29;
            continue;
        } else{
            first_total += days_amount[i - 1];
        }
    }
    for (int i = 1; i < second_month; ++i){
        if ((leap_year) && i == 2){
            second_total += 29;
            continue;
        } else{
            second_total += days_amount[i - 1];
        }
    }
    if ((first_year % 400 == 0) || (first_year % 4 == 0 && first_year % 100 != 0)){
        first_total += 1;
    }
    if ((second_year % 400 == 0) || (second_year % 4 == 0 && second_year % 100 != 0)){
        second_total += 1;
    }
    
    first_total += fisrt_days;
    second_total += second_days;
    difference = abs(second_total - first_total);
    printf("%d", difference);

    return 0;
}