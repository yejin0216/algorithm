#include <stdio.h>

/**
 * @description 1차원 배열 사용하기 > OX퀴즈
 */
int main(void) {

    int count;
    scanf("%d", &count);
    getchar();


    int array[count];
    for ( int i=0; i<count; i++ ) {

        int score = 0;
        int sum = 0;
        int a;
        while((a=getchar()) != EOF && a != '\n' ) {
            if ( a == 'O' ) {
                score++;
                sum += score;
            }
            if ( a == 'X' ) {
                score = 0;
            }
        }

        array[i] = sum;
    }

    for ( int i=0; i<count; i++ ) {
        printf("%d\n", array[i]);
    }

    return 0;
}
