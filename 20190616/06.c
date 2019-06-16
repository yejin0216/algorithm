//
// Created by yejin kim on 2019-06-16.
//

#include <stdio.h>

/**
 * @description 사칙연산 > 열 개씩 끊어 작성하기
 */
int main(void) {
    char input[100];
    scanf("%s", &input);

    for ( int i=0; i<=100; i++ ) {
        if ( input[i] == '\0' ) {
            break;
        }
        if ( i%10 == 0 && i != 0 ) {
            printf("\n%c", input[i]);
        } else {
            printf("%c", input[i]);
        }
    }

    return 0;
}
