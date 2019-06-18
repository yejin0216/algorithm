//
// Created by yejin kim on 2019-06-16.
//

#include <stdio.h>

int main(void) {

    int count;
    scanf("%d", &count);

//    3
//    40 80 60
    float score[count];
    for ( int i=0; i<count; i++ ) {
        scanf("%f", &score[i]);
    }

    float max = score[0];
    for ( int j=0; j<count; j++ ) {
        if ( max < score[j] ) {
            max = score[j];
        }
    }

    float sum = 0;
    for ( int k=0; k<count; k++ ) {
        //if ( score[k] < max ) {
        score[k] = score[k]*100/max;
        //}
        sum += score[k];
    }

    printf("%0.2f", sum/count);

    return 0;
}