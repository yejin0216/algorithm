#include <stdio.h>

/**
 * @description 1차원 배열 사용하기 > 음계
 */
int main(void) {

    int array[8];
    scanf("%d %d %d %d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4], &array[5], &array[6], &array[7]);


    int ascending = 1;
    int descending = 1;
    int mixed = 0;
    //ascending 체크
    for ( int i=0; i<7; i++ ) {
        if ( ( array[i]+1 == array[i+1] ) && ascending ) {
            ascending = 1;
        } else {
            ascending = 0;
        }
    }

    //descending 체크
    if ( !ascending ) {
        for ( int i=0; i<7; i++ ) {
            //printf("%d %d / ", array[i]-1, array[i+1]);
            if ( ( array[i]-1 == array[i+1] ) && descending ) {
                descending = 1;
            } else {
                descending = 0;
            }
        }
        if ( !descending ) {
            mixed = 1;
        }
    }

    if ( ascending ) {
        printf("ascending");
    } else if ( descending ) {
        printf("descending");
    } else {
        printf("mixed");
    }

    return 0;
}
