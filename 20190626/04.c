#include <stdio.h>

int main(void) {

    //윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때 이다.
    //
    //예를들어, 2012년은 4의 배수라서 윤년이지만, 1900년은 4의 배수이지만, 100의 배수이기 때문에 윤년이 아니다.
    //
    //하지만, 2000년은 400의 배수이기 때문에 윤년이다.

    int year;
    scanf("%d", &year);

    int result = 0;
    if ( year%4 == 0 && year%100 > 0 ) {
        result = 1;
    } else if ( year%4 == 0 && year%100 == 0 && year%400 == 0 ) {
        result = 1;
    }

    printf("%d", result);

    return 0;
}
