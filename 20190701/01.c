#include <stdio.h>

int main(void) {

    int inputs[10];
    int array[42] = {0,};
    for ( int i=0; i<10; i++ ) {
        scanf("%d", &inputs[i]); //입력받은 수 10개
        int rest = inputs[i]%42;
        array[rest] = array[rest]+1;
    }
    int result = 0;
    for ( int j=0; j<42; j++ ) {
        int value = array[j];
        if ( value > 0 ) {
            result++;
        }
    }

    printf("%d", result);

    return 0;
}
