#include <stdio.h>

/**
 * @description 1차원 배열 사용하기 > 평균점수
 */
int main(void) {

    int score[5];
    int sum = 0;
    for ( int i=0; i<5; i++ ) {
        scanf("%d", &score[i]);
        sum += score[i] >= 40 ? score[i] : 40;
    }

    printf("%d", sum/5);

    return 0;
}
