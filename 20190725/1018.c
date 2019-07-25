#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n;
    int m;
    scanf("%d", &n);//heigth
    scanf("%d", &m);//width

    char block[50][50];
    for ( int i=0; i<n; i++ ) {
        getchar();
        for ( int j=0; j<m; j++ ) {
            scanf("%c", &block[i][j]);
        }
    }

    int check = 0;

    char first = "";
    char before = "";

    //좌 -> 우
    for ( int i=0; i<n; i++ ) {
        for ( int j=0; j<m; j++ ) {
            char item = block[i][j];
            if ( i == 0 && j == 0 ) {
                //기준을 만든다.
                before = item;
            } else if ( j == 0 ) {
                first = item;
            } else if ( i != 0 && j == 0 && first == item ) {
                check++;
                first = item == 'W' ? 'B' : 'W';
                before = first;
            } else if ( j > 0 && before == item ) {
//                printf("%d %d %c \n", i, j, item);
                check++;
                before = item == 'W' ? 'B' : 'W';
            } else {
                before = item;
            }
        }
    }

    printf("\n%d", check);

    return 0;
}
