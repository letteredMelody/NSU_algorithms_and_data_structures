#include <stdio.h>
#include <string.h>

typedef struct Label_s {
    char name[16]; //имя автора (заканчивается нулём)
    int age; //возраст автора (сколько лет)
} Label;

typedef struct NameStats_s {
    int cntTotal; //сколько всего подписей
    int cntLong; //сколько подписей с именами длиннее 10 букв
} NameStats;

typedef struct AgeStats_s {
    int cntTotal; //сколько всего подписей
    int cntAdults; //сколько подписей взрослых (хотя бы 18 лет)
    int cntKids; //сколько подписей детей (меньше 14 лет)
} AgeStats;

void calcStats (const Label *arr, int cnt, NameStats *oNames, AgeStats *oAges){
    for (int i = 0; i < cnt; ++i){
        if (strlen(arr[i].name) > 10){
            oNames->cntLong += 1;
        }
        if (arr[i].age >= 18){
            oAges->cntAdults += 1;
        } else if (arr[i].age < 14){
            oAges->cntKids += 1;
        }
    }
}

int main(){
    int cnt = 0;
    char t[4];
    scanf("%d", &cnt);

    Label arr[cnt];
    NameStats oNames;
    AgeStats oAges;
    oNames.cntTotal = cnt;
    oAges.cntTotal = cnt;
    oNames.cntLong = 0;
    oAges.cntAdults = 0;
    oAges.cntKids = 0;

    for (int i = 0; i < cnt; ++i){
        scanf("%s", arr[i].name);
        scanf("%d", &arr[i].age);
        scanf("%s", t);
    }
    
    calcStats(arr, cnt, &oNames, &oAges);

    printf("names: total = %d\n", oNames.cntTotal);
    printf("names: long = %d\n", oNames.cntLong);
    printf("ages: total = %d\n", oAges.cntTotal);
    printf("ages: adult = %d\n", oAges.cntAdults);
    printf("ages: kid = %d\n", oAges.cntKids);

    return 0;
}