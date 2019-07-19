#include <stdio.h>
#include <math.h>

int main(void) {

//    자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.
//    예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 소수는 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 이들 소수의 합은 620이고, 최솟값은 61이 된다.

    int m;
    int n;
    scanf("%d", &m);
    scanf("%d", &n);

    int array[10000] = {0,}; //전부 다 소수가 아니다라고 세팅

    int firstFlag = 1;
    int firstValue = 0;
    int sum = 0;

    for ( int i=m; i<=n; i++ ) {
        if ( i == 1 ) continue;
        for ( int j=2; j<=sqrt(i); j++ ) {
            if ( i%j == 0 ) {
                array[i] = 1;
            }
        }
        if ( array[i] == 0 ) {
            sum += i;
            if ( firstFlag == 1 ) {
                firstFlag = 0;
                firstValue = i;
            }
        }
    }

    if ( firstFlag == 1 ) {
        printf("%d\n", -1);
    } else {
        printf("%d\n", sum);
        printf("%d\n", firstValue);
    }

    return 0;
}
