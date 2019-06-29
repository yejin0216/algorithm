#include <stdio.h>

int main(void) {

    int lineCount;
    scanf("%d", &lineCount);

    for ( int i = 0; i<lineCount; i++ ) {
        int loopCount;
        scanf("%d ", &loopCount);
        char array[20];
        gets(array);

        for ( int j=0; j<20; j++ ) {
            if ( array[j] == NULL ) break;
            for ( int k=0; k<loopCount; k++ ) {
                printf("%c", array[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
