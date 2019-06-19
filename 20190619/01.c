#include <stdio.h>
#include <stdlib.h>

int main(void) {

//    char *array = malloc(sizeof(int)*2);
    char array[2];
    gets(array);

    int a = 0;
    int b = 0;

    if ( array[1] == NULL ) {
        a = 0;
        b = array[0]-'0';
    } else {
        a = array[0]-'0';
        b = array[1]-'0';
    }

    int originalA = a;
    int originalB = b;

    int c, i, j;
    int count=0;
    int loop = 1;
    while (loop) {
        c = a+b;
        if ( c >= 10 ) {
            c = c%10;
        }
        a = i = b;
        b = j = c;
        count++;
        //printf("%d %d %d %d\n", a, b, originalA, originalB);
        if ( originalA == a && originalB == b ) {
            loop = 0;
            break;
        }
    }

    printf("%d", count);

    return 0;
}
