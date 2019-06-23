#include <stdio.h>

int main(void) {

    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int m = a*b*c;
    int count = 1; //자리수
    int temp = m;
    for ( int i=0; i<12; i++ ) {
        if ( temp/10 >= 1 ){
            count++;
        }
        temp = temp/10;
    }

    int array[count];
    temp = m;
    int zero = 1;

    printf("%d\n", temp);
    printf("%d\n", count);

    for ( int i=0; i<count; i++ ) {
        for ( int j=count-1; j>0; j--) {
            zero = zero * 10;
        }
        printf("%d\n", temp);
        temp = temp/zero;
        printf("%d", temp);
     }

    return 0;
}
