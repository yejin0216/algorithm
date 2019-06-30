#include <stdio.h>

int main(void) {

    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int abc = a*b*c;
    int result[10] = {0,};
    //printf("%d\n", abc);
    for ( ;1; ) {
        if ( abc/10 == 0 ) {
            result[abc] = result[abc]+1;
            break;
        } else {
            result[abc%10] = result[abc%10]+1;
            abc = abc/10;
        }
    }
    for ( int i=0; i<10; i++ ) {
        printf("%d\n", result[i]);
    }

    return 0;
}
