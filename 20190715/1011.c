#include <stdio.h>

int main(void) {

    int loop; //테스트케이스 개수
    scanf("%d", &loop);

    for ( int i=0; i<loop; i++ ) {
        long long x, y;
        scanf("%d %d", &x, &y);

        long long gap = y-x;
        long long n = 1;
        for (;1;) {
            long long pow = n*n;
            long long min = pow-n+1;
            long long max = pow+n;
            if ( gap >= min && gap <= max) {
                //printf("%d\n", n);
                if ( gap <= pow ) {
                    printf("%d\n", n+(n-1));
                } else {
                    printf("%d\n", 2*n);
                }

                break;
            }
            n++;
        }
    }

    return 0;
}
