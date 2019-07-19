#include <stdio.h>
#include <math.h>

int main(void) {

    int m;
    int n;
    scanf("%d %d", &m, &n);

    //에라토스테네스의 체
    int arrange = n-m+1;
    int notSosu[1000000] = {0,};

    notSosu[1] = 1;
    for ( int i=2; i<=n; i++ ) {
        if ( notSosu[i] == 0 ) {
            for ( int j=i; j<=n; j+=i ) {
                if ( i != j ) {
                    notSosu[j] = 1;
                }
            }
        }
    }

    for ( int i=m; i<=n; i++ ) {
        if ( notSosu[i] == 0 ) {
            printf("%d\n", i);
        }
    }

//    int notSosu[1000000] = {0,};
//
//    notSosu[1] = 1;
//    for ( int i=m; i<=n; i++ ) {
//        if ( i == 2 ) continue;
//        if ( i%2 == 0 ) {
//            notSosu[i] = 1; //2로 나눠지면 소수가 아니다.
//        }
//    }
//
//    for ( int i=m; i<=n; i++ ) {
//        if ( notSosu[i] == 0 ) {
//            for ( int j=2; j<=sqrt(i); j++ ) {
//                if ( i%j == 0 ) {
//                    notSosu[i] = 1;
//                    break;
//                }
//            }
//        }
//        if ( notSosu[i] == 0 ) {
//            printf("%d\n", i);
//        }
//    }

    return 0;
}
