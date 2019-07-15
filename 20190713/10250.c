#include <stdio.h>

int main(void) {

    int count;
    scanf("%d", &count);

    for ( int i=0; i<count; i++ ) {
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);

        int chung = 1;
        int ho = 1;

        int v = n/h;
        int r = n%h;
        if ( r == 0 ) {
            chung = h;
            ho = v;
        } else {
            chung = r;
            ho = v+1;
        }

        printf("%d%.2d\n", chung, ho);
    }

    return 0;
}
