#include <stdio.h>

int main(void) {

    int temp;
    int array[10] = {0,};
    int max = 0;
    int result = 0;
    while ( (temp = getchar()) != EOF && temp != '\n' ) {
        temp = temp-'0';
        if ( temp == 6 || temp == 9 ) { //6,9일 경우 처리
            temp = 6;
            array[temp] += 1;
            //printf("%d", array[temp]);
            result = array[temp]%2 == 0 ? array[temp]/2 : (array[temp]+1)/2;

            //printf("%d", result);

        } else {
            array[temp] += 1;
            result = array[temp];
        }
        max = max < result ? result : max;
    }

    printf("%d", max);

    return 0;
}
