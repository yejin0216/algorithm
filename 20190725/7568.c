//
// Created by yejin kim on 2019-07-25.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count;
    scanf("%d", &count);

    int *x = (int*)malloc(sizeof(int)*count);
    int *y = (int*)malloc(sizeof(int)*count);
    for ( int i=0; i<count; i++) {
        scanf("%d", &x[i]); //몸무게
        scanf("%d", &y[i]); //키
    }

    int __comp_x = 0;
    int __comp_y = 0;
    for ( int i=0; i<count; i++ ) {
        int __x = x[i];
        int __y = y[i];
        int check = 0;
        for ( int j=0; j<count; j++ ) {
            if ( __x < x[j] && __y < y[j] ) {
                check++; //나는 몇개보다 작은가?
            }
        }

        printf("%d ", check+1);
    }

    free(x);
    free(y);
}

