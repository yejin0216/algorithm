#include <stdio.h>

int calculator(int num) {
    return num/10
}

int main(void) {

    int array[10000] = {0,};

    for ( int i=1; i<=10000; i++ ) {
        if ( i<10 ) {
            array[i+i] = 1;
        } else if ( i>=10 && i<100 ) {
            int a = i/10;
            int b = i%10;
            array[i+a+b] = 1;
        } else if ( i>=100 && i<1000 ) {
            int a = i/100;
            int b = (i-a*100)/10;
            int c = i%10;
            array[i+a+b+c] = 1;
        } else {
            int a = i/1000;
            int b = (i-a*1000)/100;
            int c = (i-a*1000-b*100)/10;
            int d = i%10;
            if ( i+a+b+c+d <= 10000 ) {
                array[i+a+b+c+d] = 1;
            }
        }
        if ( array[i] == 0 ) {
            printf("%d\n", i);
        }
    }

    return 0;
}