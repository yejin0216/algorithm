#include <stdio.h>

int main(void) {

    long long unsigned int goal;
    scanf("%llu", &goal); //목표

    long long unsigned int i=1;

    if ( goal != 1 ) {
        long long unsigned int before = 1;
        for ( ;1; ) {
            if ( goal <= before ) {
                break;
            }
            before = before+6*i;
            i++;
        }
    }

    printf("%llu", i);

    return 0;
}
