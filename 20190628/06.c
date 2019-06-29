#include <stdio.h>

int main(void) {

    char input[15];
    gets(input); //할머니가 아는 문자

    int sum = 0;
    for ( int i=0; i<15; i++ ) {
        if ( input[i] == NULL ) break;
        int temp = input[i]; //char to int
        //printf("%d", 'O');
        int lo = 0;
        if (temp <= 79) {
            lo = ((temp-62)/3)+1+1;
        } else if (temp>=80 && temp<=83 ) {
            lo = 8;
        } else if (temp>=84 && temp<=86) {
            lo = 9;
        } else if (temp>=87 && temp<=90) {
            lo = 10;
        }
        //printf("%d", lo);
        sum += lo;
    }

    printf("%d", sum);

    return 0;
}
