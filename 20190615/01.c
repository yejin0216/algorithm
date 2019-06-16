#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a;
    scanf("%d", &a);

    //5배수
    int b=a/5;
    int c=a%5;

    //3배수
    int d=a/3;
    int e=a%3;

    //5의 배수
    if ( c == 0 ) {
        printf("%d", b);
        //5의 배수가 아닌 경우
    } else {
        int temp = d;
        bool check = false;
        for ( int i=b; i>0; i-- ) {
            for (int j=1; j<=d; j++) {
                if ( !check && ((i*5) + (j*3) == a) ) {
                    temp = i+j;
                    check = true;
                }
            }
        }

        if ( !check && e > 0 ) {
            printf("%d", -1);
        } else {
            printf("%d\n", temp);
        }
    }

    return 0;
}