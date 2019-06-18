//
// Created by yejin kim on 2019-06-16.
//

#include <stdio.h>

int main(void) {

    int line;
    scanf("%d", &line);

    int studentNum;
    double result[line];
    for ( int i=0; i<line; i++ ) {
        scanf("%d", &studentNum);
        int score[studentNum];
        int sum = 0;
        for ( int j=0; j<studentNum; j++ ) {
            scanf(" %d", &score[j]);
            sum += score[j];
        }
        int std = sum/studentNum;
        //printf("%d\n", std);
        int temp = 0;
        for ( int k=0; k<studentNum; k++ ) {
            if ( score[k] > std ) {
                temp++;
            }
        }
        result[i] = (double)temp/(double)studentNum*100;
    }

    for (int i=0; i<line; i++) {
        printf("%.3lf%%\n", result[i]);
    }
}