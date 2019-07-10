#include <stdio.h>
#include <string.h>

int main(void) {

    int count;
    scanf("%d", &count);

    for ( int i=0; i<count; i++ ) {
        int k, n;
        scanf("%d", &k); //층
        scanf("%d", &n); //호

        //printf("%d\n", n);

        int brow[14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14}; //밑층
        int row[14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14}; //현재층
        for ( int j=1; j<=k; j++ ) { //층
            for ( int l=1; l<n; l++ ) { //호
                int col = 1;
                int sum = 1;
                while ( col <= l ) { //1, 2, 3
                    sum += brow[col];
                    col++;
                }
                row[l] = sum;
            }
            memcpy(brow, row, sizeof(row));
        }
        printf("%d\n", row[n-1]);
    }

    return 0;
}
