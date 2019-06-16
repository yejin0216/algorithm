//
// Created by yejin kim on 2019-06-16.
//
#include <stdio.h>

/**
 * @description 사칙연산 > 숫자의 합
 */
int main(void) {

    int a;
    scanf("%d\n", &a);

//    int temp;
//    while ( (temp=getchar()) != EOF && temp != "\n" ) {}

    char b[a];
    gets(b);

    int sum = 0;
    for ( int i=0; i<a; i++ ) {
        sum = sum+b[i]-'0'; //int to char
    }

    printf("%d\n", sum);

    return 0;
}