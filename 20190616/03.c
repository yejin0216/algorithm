//
// Created by yejin kim on 2019-06-16.
//
#include <stdio.h>

/**
 * @description 사칙연산 > 2007년
 */
void getDate(day) {
    int temp = day%7;
    if ( temp == 1 ) {
        printf("%s", "MON");
    } else if ( temp == 2 ) {
        printf("%s", "TUE");
    } else if ( temp == 3 ) {
        printf("%s", "WED");
    } else if ( temp == 4 ) {
        printf("%s", "THU");
    } else if ( temp == 5 ) {
        printf("%s", "FRI");
    } else if ( temp == 6 ) {
        printf("%s", "SAT");
    } else if ( temp == 0 ) {
        printf("%s", "SUN");
    }
}

int main(void) {

    int month;
    int day;
    scanf("%d %d", &month, &day);

    int daysum = 0;
    if ( month == 1 ) {
        getDate(day);
    } else {
        for ( int i=1; i<month; i++ ) {
            if ( i == 4 || i == 6 || i == 9 ||  i == 11 ) {
                daysum = daysum + 30;
            } else if ( i == 2 ) {
                daysum = daysum + 28;
            } else {
                daysum = daysum + 31;
            }
        }
        daysum = daysum + day;

        int temp = daysum%7;
        getDate(temp);
    }

    return 0;
}