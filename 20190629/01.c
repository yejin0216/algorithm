#include <stdio.h>

int main(void) {

    char input[100];
    gets(input);

    int result = 0;
    int count = 0;
    for ( int i=0; i<100; i++ ) {
        if (input[i] == NULL) break;
        char a = input[i];
        char b = input[i+1];
        //char c = input[i+2];
        if ( a == 'c' && (b == '='||b == '-')) {
            result++;
        } else if ( (a == 'd' && b == '-') ) {
            result++;
        } else if ( a == 'l' && b == 'j' ) {
            result++;
        } else if ( a == 'n' && b == 'j' ) {
            result++;
        } else if ( a == 's' && b == '=' ) {
            result++;
        } else if ( (a == 'z' && b == '=') && (i > 0 && input[i-1] != 'd') ) {
            result++;
        } else if ( (a == 'd' && b =='z' && input[i+2] == '=') ) {
            result += 2;
        }
        count++;
    }

    printf("%d", count - result);

    return 0;
}
