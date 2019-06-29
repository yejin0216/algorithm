#include <stdio.h>

int main(void) {

    //그룹단어를 찾아라.
    int count;
    scanf("%d", &count);

    int temp = getchar();

    int result = 0;
    for ( int i=0; i<count; i++ ) {
        char array[100];
        gets(array);

        int check = 0;
        for ( int j=0; j<100; j++ ) {
            char a = array[j];
            if ( a == NULL ) break;
            for ( int k=j+1; k<100; k++ ) {
                if ( array[k] == NULL ) break;
                if ( a != array[j+1] && a == array[k] ) {
                    //printf("%c", array[k]);
                    check = 1;
                    break;
                }
            }
        }
        if ( check ) {
            result++;
        }
    }

    printf("%d", count-result);

    return 0;
}
