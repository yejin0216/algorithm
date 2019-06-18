//
// Created by yejin kim on 2019-06-18.
//

#include <stdio.h>

int main(void) {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int result;

    if ((a > b && a < c) || (a < b && a > c) || (a == b && b == c) || ( a == b && b != c ) || ( a == c && b != c ) ) {
        result = a;
    }
    if ((b > a && b < c) || (b < a && b > c)) {
        result = b;
    }
    if ((c < b && c > a) || (c > b && c < a) || ( b == c && a != b )) {
        result = c;
    }

    printf("%d", result);

    return 0;
}