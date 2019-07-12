#include <stdio.h>

int gcd(int a, int b) {
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main(void) {
    int count;
    scanf("%d", &count);

    for ( int i=0; i<count; i++ ) {
        int m, n, x, y;
        scanf("%d %d %d %d", &m, &n, &x, &y);
        long long endgame = lcm(m, n);
        printf("%d\n", endgame);

        long long loop = 0;
        long long result = 0;
        while ( 1 ) {
            long long temp = (m*loop) + x;
            if ( temp > endgame ) {
                result = -1;
                break;
            }
            if ( (temp % n == y) || (temp % n == 0 && n == y ) ) {
                result = temp;
                break;
            }
            loop++;
        }
        printf("%lld\n", result);
   }

    return 0;
}