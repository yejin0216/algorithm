#include <stdio.h>

int main(void) {

    int input;
    scanf("%d", &input);

    int arrange = 0;
    int i = 0;
    //1, 3, 6, 10, 15

    for( ;1; ) {
       if ( input <= arrange ) break;
        arrange = arrange+(i+1);
        i++;
    }

    int a = arrange-input;
    if ( i%2 == 0 ) {
        printf("%d/%d", i-a, 1+a);
    } else {
        printf("%d/%d", 1+a, i-a);
    }
//    printf("%d", i);

    return 0;
}
