#include <iostream>

int main(void) {

    int array[11] = {0,};

    int temp;
    while( (temp=getchar()) != EOF && temp!='\n' ) {
        int value = temp-'0';
        array[value] = array[value]+1; //카운트한다
    }

    for ( int i=10; i>=0; i-- ) {
        int value = array[i];
        if ( value > 0 ) {
            for ( int j=0; j<value; j++ ) {
                printf("%d", i);
            }
        }
    }

    return 0;
}
