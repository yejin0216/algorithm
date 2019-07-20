#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //골드바흐의 파티션
    int count;
    scanf("%d", &count);

    int loop = 0;
    while ( loop < count ) {
        int number;
        scanf("%d", &number);

        //동적할당
        int *notSosu = (int*)malloc(sizeof(int)*(number+1));
        for ( int i=0; i<number; i++ ) {
            notSosu[i] = 0;
        }

        //에라토스 테네스의 체
        for ( int i=2; i<number; i++ ) {
            if ( notSosu[i] == 0 ) {
                for ( int j=i; j<number; j+=i ) {
                    if ( i!=j ) {
                        notSosu[j] = 1; //소수일 경우 1을 넣는다.
                    }
                }
            }
        }

        int a = 0;
        int b = 0;
        for ( int i=number/2; i>1; i-- ) {
            if ( notSosu[i] == 0 ) {
                a = i;
                b = number-a;
                //b도 소수인지 확인한다.
                int check = 0;
                for ( int i=number; i>1; i-- ) {
                    if ( notSosu[i] == 0 && i == b ) {
                        check = 1;
                        break;
                    }
                }
                if ( check == 1 ) break;
            }
        }

        printf("%d %d\n", a, b);

        loop++;
    }

    return 0;
}
