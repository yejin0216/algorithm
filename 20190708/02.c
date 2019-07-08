#include <stdio.h>

int main(void) {

    int input;
    scanf("%d", &input);

    int result = 1;
    for ( int i=input; i>0; i-- ) {
        result = result*i;
    }

    printf("%d", result);

    return 0;
}
