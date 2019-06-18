//
// Created by yejin kim on 2019-06-18.
//
#include <stdio.h>

int main(void) {
    //시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

    int input;
    scanf("%d", &input);

    char score = 'A';
    if ( input >= 90 && input <= 100 ) {
        score = 'A';
    } else if ( input >= 80 && input <= 89 ) {
        score = 'B';
    } else if ( input >= 70 && input <= 79 ) {
        score = 'C';
    } else if ( input >= 60 && input <= 69 ) {
        score = 'D';
    } else {
        score = 'F';
    }

    printf("%c", score);

    return 0;
}