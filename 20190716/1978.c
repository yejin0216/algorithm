#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    //첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
    int n;
    scanf("%d", &n);

    char array[1000];
    fgets(array, sizeof(array), stdin);

    int result = 0;
    char *ptr = strtok(array, " ");
    while ( ptr != NULL ) {
        int iptr = atoi(ptr);
        if ( iptr < 10 ) {
            if ( iptr == 2 || iptr == 3 || iptr == 5 || iptr == 7 ) {
                result++;
            }
        } else {
            if ( iptr%2 == 1 && iptr%3 != 0 && iptr%5 != 0 && iptr%7 != 0 ) {
//                printf("%d \n", iptr);
                result++;
            }
        }
        ptr = strtok(NULL, " ");
    }

    printf("%d\n", result);

    return 0;
}