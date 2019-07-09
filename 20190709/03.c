#include <stdio.h>

int main(void) {

    int input;
    scanf("%d", &input); //input은 1000보다 작다.

    int result = 0;
    for ( int i=1; i<=input; i++ ) {
        if ( i < 100 ) {
            result++;
        } else {
            int a = i/100;
            int b = (i-(a*100))/10;
            int c = i-(a*100)-(b*10);
            if ( ((a-b) == (b-c)) || ((b-a) == (c-b)) ) {
                result++;
            }
        }
    }

    printf("%d", result);

    return 0;
}
