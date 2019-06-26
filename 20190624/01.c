#include <stdio.h>

/**
 * @description 문자열 사용하기 > 알파벳 찾기
 */
int main(void) {

    char input[100];
    gets(input);

    for ( int j=97; j<123; j++ ) {
        int check = 0;
        for ( int i=0; i<100; i++ ) {
            if ( input[i] == NULL || check ) break;
            int item = input[i];
            if ( j == item ) {
                check = 1;
                printf("%d ", i);
            }
        }
        if ( j == 122 ) {
            if ( !check ) {
                printf("%d", -1);
            }
        } else {
            if ( !check ) {
                printf("%d ", -1);
            }
        }
    }

    return 0;
}
