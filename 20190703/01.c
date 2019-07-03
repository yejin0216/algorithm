#include <stdio.h>
#include <math.h>

/**
 * @description 달팽이는 올라가고 싶다
 */
int main(void) {

    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);

    int up = v + (a-b) - a;
    int down = a - b;

    int day = 0;
    if ( up % down == 0 ) {
        day = up/down;
    } else {
        day = ceil(up/(double)down);
    }

    if ( up > v ) {
        day = 1;
    }

    printf("%d", day);

    return 0;
}
