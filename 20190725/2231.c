//
// Created by yejin kim on 2019-07-25.
//
#include <stdio.h>
#include <math.h>

int main(void) {

    int n;
    scanf("%d", &n);

    //자리수와 각각 숫자 구하기
    //ex.216
    int sum = n;
    int __n = n;
    int flag = 0;
    int m = 0;
    for ( int i=n-54; i<n; i++ ) {
        int temp = i;
        int rest_sum = 0;
        while ( temp > 0 ) {
            int rest = temp%10;
            rest_sum += rest;
            temp /= 10;
        }
        sum = i+rest_sum;
//        printf("%d\n", rest_sum);
//        printf("%d\n", sum);

        if ( n == sum ) {
            flag = 1;
            m = i;
            break;
        }
    }

    if ( flag ) {
        printf("%d\n", m);
    } else {
        printf("%d\n", 0);
    }

    return 0;
}
