#include <stdio.h>
#include <math.h>

int main(void) {

    int count;
    scanf("%d", &count);

    int result = 0;
    for ( int i=0; i<count; i++ ) {
        int x;
        scanf("%d", &x);

        if ( x == 1 ) continue;

        int check = 1;
        for ( int i=2; i<=sqrt(x); i++ ) {
            if ( x % i == 0 ) {
                check = 0;
            }
        }

        if ( check ) {
            result++;
        }
    }

    printf("%d\n", result);

    return 0;
}