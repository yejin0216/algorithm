#include <stdio.h>

int main(void) {

    char a[6];
    gets(a);

    char ra[3];
    char rb[3];
    int j=6;
    for ( int i=0; i<3; i++ ) {
        ra[i] = a[j];
        j--;
    }
    j--;
    for ( int i=0; i<3; i++ ) {
        rb[i] = a[j];
        j--;
    }

    int c = (ra[0]-'0')*100+(ra[1]-'0')*10+(ra[2]-'0');
    int d = (rb[0]-'0')*100+(rb[1]-'0')*10+(rb[2]-'0');

    printf("%d", c > d ? c : d);

    return 0;
}
