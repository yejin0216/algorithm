#include <stdio.h>

int lcm(int m, int n) {
    int max = m > n ? m : n;
    while ( 1 ) {
        if ( max%m == 0 && max%n == 0 ) {
            break;
        }
        max++;
    }
    return max;
}

int main(void) {

    int m = 4;
    int n = 10;

    printf("%d", lcm(m,n));

    return 0;
}