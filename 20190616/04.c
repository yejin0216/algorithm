//
// Created by yejin kim on 2019-06-16.
//
#include <stdio.h>

/**
 * @description 사칙연산 > 합
 */
int main(void) {

    int input;
    scanf("%d", &input);

    int sum = 0;

    for ( int i=1; i<=input; i++ ) {
        sum = sum+i;
    }

    printf("%d", sum);

    return 0;
}