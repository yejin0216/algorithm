//
// Created by yejin kim on 2019-06-16.
//
#include <stdio.h>

/**
 * @description 사칙연산 > 별찍기-3
 */
int main(void) {

    int input;
    scanf("%d", &input);

    for ( int i=1; i<=input; i++ ) {
        for ( int j=input; j>=1; j-- ) {
            if ( j < i ) {
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
