#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int range = 123456*2;

    for ( ;1; ) {
        int input;
        scanf("%d", &input);

        if ( input == 0 ) break;

        //int notSosu[246911] = {0,};
        int *notSosu = (int*)malloc(sizeof(int)*(range+1));
        for ( int i=0; i<=range; i++ ) {
            notSosu[i] = 0;
        }

        for ( int i=2; i<=range; i++ ) {
            if ( notSosu[i] == 0 ) {
                for ( int j=i; j<=range; j+=i ) {
                    if ( i!= j ) {
                        notSosu[j] = 1;
                    }
                }
            }
        }

        int result = 0;
        for ( int i=input+1, max=2*input; i<=max; i++ ) {
            if ( i == 1 ) continue;
            if ( notSosu[i] == 0 ) {
                result++;
            }
        }

        free(notSosu);

        printf("%d\n", result);
    }

    return 0;
}
