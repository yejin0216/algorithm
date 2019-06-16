//
// Created by yejin kim on 2019-06-16.
//
#include <stdio.h>

/**
 * @description 사칙연산 > 빠른 A+B
 */
int main(void) {
    int size;
    scanf("%d", &size);

    int a, b;
    int output[size];
    for ( int i=0; i<size; i++ ) {
        scanf("%d %d", &a, &b);
        output[i] = a+b;
    }

    for ( int j=0; j<size; j++ ) {
        printf("%d\n", output[j]);
    }

    return 0;
}

