#include <stdio.h>

int main(void) {

    int a, b, c, count;
    scanf("%d %d %d", &a, &b, &c);

    count = a/(c-b)+1;

    if ( c-b <= 0 ) {
        count = -1;
    }

    printf("%d", count);

    return 0;
}
