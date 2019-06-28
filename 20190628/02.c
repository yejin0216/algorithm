#include <stdio.h>

int main(void) {

    int array[9];
    int max = 0;
    int count = 0;

    for ( int i=0; i<9; i++ ) {
        scanf("%d", &array[i]);
    }
    for ( int j=0; j<9; j++ ) {
        max = max > array[j] ? max : array[j];
    }
    for ( int k=0; k<9; k++ ) {
        if ( max == array[k] ) {
            count = k+1;
        }
    }

    printf("%d\n", max);
    printf("%d\n", count);

    return 0;
}
