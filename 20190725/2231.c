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
    int jarisu = 0;
    int __n = n;
    for ( ;1; ) {
        int temp = __n/10;
        if ( temp > 0 ) {
            jarisu++;
            __n = temp;
        }
        if ( temp == 0 ) {
            jarisu++;
            break;
        }
    }
    printf("%d\n", jarisu);

    __n = n; //초기화
    int __first = __n/pow(10, (jarisu-1));
    printf("%d\n", __first);

    for ( int i=1; i<=jarisu; i++ ) {

    }

    return 0;
}
