#include <stdio.h>

int main(void) {

    int count;
    scanf("%d", &count);
    int array[count];
    for ( int i=0; i<count; i++ ) {
        int a, b;
        scanf("%d %d", &a, &b);
        array[i] = a+b;
    }
    for ( int j=0; j<count; j++ ) {
        printf("%d\n", array[j]);
    }

    return 0;
}
