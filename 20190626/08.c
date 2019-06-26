#include <stdio.h>

int main(void) {

    int array[100];
    int i = 0;
    for (;1;) {
        int a, b;
        scanf("%d %d", &a, &b);
        if ( a == 0 && b == 0 ) {
            break;
        }
        array[i] = a+b;
        i++;
    }
    for ( int j=0; j<i; j++ ) {
        printf("%d\n", array[j]);
    }

    return 0;
}
